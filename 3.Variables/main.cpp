#include <iostream>

using namespace std;

int main()
{
    // giving the variable a value is optional.
    int variable = 8;

    /* An integer is usually 4 bytes (32 bits) of memory.
       This varies based on the compiler.
       An integer is a signed type of data.
       The first bit of an integer is for the sign. */

    // Let's print the variable.
    cout << variable << endl;

    // Let's change the value of that variable.
    variable = 20;

    // Print it again to confirm.
    cout << variable << endl;

    /* Unsigned or always positive integer.
       We can store a number from 0 to 32^2 in it. */
    unsigned int variable2 = 0b11111111111111111111111111111111;

    cout << "The maximum value of an unsigned int is " << variable2 << endl;

    /* types of data: char(1), short(2), int(4), long(4), longlong(8)
       You can add unsigned to all of these. */

    char character1 = 'A';
    char character2 = 65;

    cout << "character1 = " << character1 << " and character2 = " << character2 << endl;

    short short1 = 'A';
    short short2 = 65;

    cout << "short1 = " << short1 << " and short2 = " << short2 << endl;

    // For decimal values we use float(4) and double(8)

    // Example
    float fl_var = 5.5; // This is actually a double if it is defined like so.
    float proper_fl_var = 5.5f; // Defining a float properly
    double double_var = 5.2;

    // Bool(1) can hold true or false. 1 or 0. 0 is False. Everything else is True.
    bool flag = true;
    cout << flag << endl;
    flag = false;
    cout << flag << endl;

    // Let's find out the size of bool
    cout << "The size of a bool is " << sizeof(bool) << " byte." << endl;

    return 0;
}
