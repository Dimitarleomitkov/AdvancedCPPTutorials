#include <iostream>
#include <string>

/* A string is a group of characters. An array of characters.
   Characters are 1 byte and that is what ASCII actually is.
   This gives us 256 symbols. This is the baseline that C++
   uses. */

// This is wrong. This creates a copy of the string.
void PrintString (std::string stringy)
{
    std::cout << stringy << std::endl;
}

// We should we passing strings by const reference.
void PrintStringProper (const std::string& stringy)
{
    std::cout << stringy << std::endl;
}

int main()
{
    // Create a string the C way.
    const char* name = "Jack";
    const char name2[] = "Sparrow";

    std::cout << "I am captain " << name << " " << name2 << "." << std::endl;

    // The const keyword is not always needed. It is there because a string is usually immutable.
    // name[2] = 'r'; // This would not work.
    // char* name3 = "John" is a string literal. Future topic.

    char name3[] = "John";

    /* Every string has a hidden termination character which is a \0. This allows us
       to handle the character pointers like variables and print them as such. C++ knows to
       print everything until it hits the \0 character. */
    std::cout << name3 << std::endl;
    name3[2] = 'u';
    std::cout << name3 << std::endl;

    /* Even though these are char pointers, they are not created on the heap.
       These variables <name>, <name2> and <name3> do not need to be deleted from memory.
       <new> and <delete> are a future topic. As a rule of thumb -> No <new> - No <delete>. */

    // This is how a string can be initialized manually.
    char name4[5] = { 'J', 'h', 'o', 'n', '\0' };

    // If the termination 0 is forgotten, C++ would print until it hits a 0 in memory.
    std::cout << name4 << std::endl;

    // C++ has an implementation for strings.
    std::string cpp_string = "Rick";

    std::cout << cpp_string << std::endl;
    // The string class offers some nice utility functions.
    std::cout << cpp_string.size() << std::endl;
    std::cout << cpp_string + " is awesome!" << std::endl;

    std::cout << "\"ic\" is at " << cpp_string.find("ic") << " position." << std::endl;

    // This is a library. Check it out at https://cplusplus.com/reference/string/string/

    // Passing strings to functions
    PrintString(cpp_string);
    PrintStringProper(cpp_string);

    return 0;
}
