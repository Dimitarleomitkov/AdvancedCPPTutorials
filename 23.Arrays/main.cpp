#include <iostream>
#include <array>

/* An array is a collection of elements. Multiple variables stored
   together in memory. A collection of data which can be accessed
   individually by indexing them. For an example, if we want to have
   50 integer variables, we can create an array to hold all 50 of them,
   then use it when as a collection or each variable individually. */

/* For classes we want the arrays to be allocated on the stack. Otherwise we get
   pointers to pointers and the code starts to jump too many times. Therefore, the
   performance of the code will be slowed down. */

class Entity {
public:
    // Doing it like this would ensure Entity has its array in its memory.
    int ex_arr[5];

    Entity() {
        for(int i = 0; i < 5; ++i) {
            ex_arr[i] = 33;
        }
    }
};

// Do not do it like this.
class Entity2 {
public:
    // Entity2 now has a pointer to an array outside of Entity2.
    int* ex_arr = new int[5];

    Entity2() {
        for(int i = 0; i < 5; ++i) {
            ex_arr[i] = -1;
        }
    }
};

int main()
{
    // Defining an array.
    int example[5];

    /* Accessing the first element of the array.
       The first element of an array is at index 0.
       Let's set the first element to 2. */
    example[0] = 2;
    // Setting the last element (index 4) to 4.
    example[4] = 4;
    // The rest of the elements are not set.

    // Let's print them. [1], [2] and [3] are randomly set by the computer.
    std::cout << "[0] = " << example[0] \
                << ", [1] = " << example[1] \
                << ", [2] = " << example[2] \
                << ", [3] = " << example[3] \
                << ", [4] = " << example[4] << std::endl;

    /* Printing the array (which is a pointer type pointing to the first element)
       would result in printing the memory address of the array (the first
       element's) address. */
    std::cout << "Address of the array: " << example << std::endl;
    std::cout << "Address of the first element of the array: " << &example[0] << std::endl;

    // We can copy a value of the array into a variable.
    int a = example[4];

    std::cout << "a = " << a << std::endl;

    /* Arrays allow you to write in the memory address of the index.
       This is dangerous. For example, we can set 5 to the array index of -1
       and C++ would allow this. However, that memory address might be used
       by another variable, which would essentially overwrite it. */

    // example[-1] = 5; // Always keep to the bounds of the array!

    // Let's set all the variables of the array in a smart way using loops.
    for (int i = 0; i < 5; ++i) {
        // We are looping through the indicies and assigning the value 11.
        example[i] = 11;
        // Printing the result.
        std::cout << example[i] << std::endl;
    }

    /* But if the array itself is just a pointer to a memory address then it
       is allowed for a pointer to be declared and become that array. */
    int* arr_ptr = example;

    // Now we can access the values in the addresses like so with pointer arythmetic.
    *(arr_ptr + 2) = 6;

    // Print the third element (index 2) to see that it is now 6.
    std::cout << example[2] << std::endl;

    // This is because the addresses are the same.
    std::cout << arr_ptr + 2 << " = " << &example[2] << std::endl;

    /* Creating arrays on the heap instead of the stack means allocating the memory
       dynamically. We can use the keyword <new> to do so. */
    int* another_arr = new int[5];

    /* The difference between an array on the stack and an array on the heap is the
       longevity. The array on the stack is destroyed when the scope runs out - When
       the function reaches it's closing bracket. The array on the heap will live until
       the program ends. We need to clean it manually if we want it to be deleted before
       the end of the program. */
    for (int i = 0; i < 5; ++i) {
        another_arr[i] = 13;
        // Printing the result.
        std::cout << another_arr[i] << std::endl;
    }

    // Deleting the heap allocated array.
    delete[] another_arr;

    /* Finally, <array> is a built in data structure in C++11. It offers some advantages like
       tracking its boundaries and knowing its size. In C++ there is no way to know the size
       of a normal array, unless you do a specific calculation sizeof(array) / sizeof(data_size).
       However, this works only with the stack stored arrays. With the heap the first sizeof would
       result in the size of the pointer, which is not useful. This leaves the only option of
       maintaining the size yourself. The easiest way to handle this is to declare a variable which
       holds the size of the array. This variable needs to be known at compile time! */

    // Example of C++11 array and its initialization at declaration.
    std::array<int, 5> c11_arr { {5, 7, 11, 32, 40} }; // Double braces required for C++11 and not after C++14 onwards.

    // Print it for completeness.
    for (unsigned int i = 0; i < c11_arr.size(); ++i) {
        std::cout << c11_arr[i] << std::endl;
    }
    /* These arrays (std::array C++11) come with additional overhead of performance and memory. Use wisely!
       This is the case for every convenience in programming. */

    return 0;
}
