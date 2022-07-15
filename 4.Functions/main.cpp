#include <iostream>

using namespace std;

//<return value> <name> (<parameters>)

/*
Implementation of the function Multiply()
params:
    int a
    int b
return:
    int
*/
int Multiply (int a, int b)
{
    return a * b;
}
/* A function can have void as a return value.
   A function does not necessarily have parameters. */

/*
Implementation of the function MultiplyAndLog()
params:
    int a
    int b
return:
    void
*/

void MultiplyAndLog (int a, int b)
{
    // Creating a variable to store the result.
    int result = 0;
    // Calling the function Multiply and passing the parameters a and b.
    // Storing the returned value of Multiply() in result.
    result = Multiply (a, b);
    // Print out the result.
    cout << result << endl;
}

int main()
{
    // Creating a local variable result.
    int result = 0;

    // Call the function
    result = Multiply (3, 2);
    cout << result << endl;

    result = Multiply (8, 5);
    cout << result << endl;

    result = Multiply (90, 45);
    cout << result << endl;

    // Let's escape the redundancy of doing this over and over again
    MultiplyAndLog(3, 2);
    MultiplyAndLog(8, 5);
    MultiplyAndLog(90, 45);

    /* Too many functions can be bad. Every time a function is called
       the parameters are pushed onto the Stack. A return address is pushed
       onto the Stack. Then a jump instruction is executed. After the function
       is complete the code jumps back to where it was (the return address).
       This can slow down a program.
       There is also inlining - Future topic. */

    /* main is a special function. It does not need to return a value.
       If there is no return value, it will assume a 0 is returned. */

    /* Functions can be broken down into declarations and definitions.
       Declarations are usually stored in a header file.
       Definitions/Implementations are usually stored in source files. */

    return 0;
}
