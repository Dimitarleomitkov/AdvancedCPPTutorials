#include <iostream>

/* Static changes meaning depending whether it is inside a class/struct or not.
   Outside a class, static means that the linkage of that symbol is internal.
   Only the same cpp file the symbol is declared will see the symbol if it is a global symbol.
   Only the function will see the symbol if it is declared in a function.
   A static symbol inside a function does not get deleted when the function goes out of scope. */


/* (future topic) Static inside a class means that the variable will be declared once for all the objects
   instantiated from that class. For example if we have static string name = "John" in a class Person, every
   Person we create throughout the code will have the same name John. Same for functions. */

// Create a counterpart normal variable with the same name as the static one.
int s_Variable = 10;

int main()
{
    // This will print out 10 instead of 5.
    std::cout << s_Variable << std::endl;

    /* If the static variable in Static.cpp does not have the static keyword we would get a linking error.
       If we want to use the variable in Static.cpp here, we can remove the = 10 part in main.cpp and the static keyword
       in Static.cpp and mark the variable as extern.
       That way the linker would look for it in an external translation unit - External linking.
       Same goes for functions. */

    return 0;
}
