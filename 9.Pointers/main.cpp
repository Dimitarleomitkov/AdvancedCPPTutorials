#include <iostream>
#include <string.h>

using namespace std;

// Define a macro. This will be covered in a future tutorial.
#define LOG(x) std::cout << x << std::endl;

int main()
{
    /* Pointers are integers that store a memory address.
       Let's create a typeless pointer, so that we demonstrate
       how the type of data may not matter for a pointer.
       Our pointer will be a NULL pointer - nullptr, 0, NULL. */
    void* ptr = 0;

    // Let's create an integer.
    int variable = 8;
    // Let's store the memory address of the variable (using the & symbol) in the pointer.
    ptr = &variable;
    // Print it using the macro.
    LOG(ptr);

    // The type of the pointer tells us what type of data it is expected to point to.
    int* ptr2 = &variable;

    LOG(ptr2);
    /* Print the contents of the pointed address by dereferencing the pointer with *
       LOG(*ptr);
       This will not work because void cannot be printed in any meaningful way.
       However we can print the value pointed with ptr2. */
    LOG(*ptr2);
    // We can also use the pointer to still access and write to the variable.
    *ptr2 = 10;

    /* Let's print out everything. Remark that the two pointers point to the same address.
       One can access and manipulate the memory, while the other cannot. This is because the
       type is specified for ptr2, while ptr is a void pointer. It only holds the address and
       that is all. */
    LOG("==========");
    LOG(ptr);
    LOG(ptr2);
    LOG(*ptr2);

    /* The memory we have used so far is allocated on the Stack (future topic).
       Let's try to use some memory from the Heap (future topic).
       new char[8] will allocate 8 bytes of memory and give us the address at the start (element 0). */
    char* buffer = new char[8];
    // memset sets the memory of an array with the value and it needs the size.
    memset(buffer, 5, 8);

    /* We can also create pointers to pointers.
       Essentially storing the address of the variable which stores the address
       of the array of characters. */
    char** ptr3 = &buffer;
    // Let's see the memory address of buffer.
    LOG(ptr3);
    // We can use this to find it in the memory view and confirm that the buffer stores our expected values.

    LOG("==========");
    // Let's have some fun.
    // Declare an integer variable as 65.
    int var = 65;
    /* Create a pointer, pointing to the address of the variable.
       The pointer is void. In other words it is typeless. It will only hold the memory of the variable. */
    void* ptr4 = &var;

    /* Now let's cast the pointer to a char pointer, to tell the compiler a character is stored in the address
       even though there is actually an integer there. Print it and see that the result would be the letter "A". */
    LOG(*(char*)ptr4);
    /* We can do such things with void pointers. They simply point to memory. We can tell the compiler how to
       interpret that memory in the future. */

    // Make sure to clean up after ourselves. Freeing up the memory.
    delete [] buffer;

    return 0;
}
