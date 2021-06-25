#include <iostream>

/* Definition of the function Log(). A prototype of the function.
   The linker will take care of linking the prototype with the implementation. */
void Log (const char* message);

int main()
{
    // Call our new function which is implemented in our new .cpp file
    Log ("Hello world!");
    return 0;
}
