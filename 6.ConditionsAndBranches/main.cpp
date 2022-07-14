#include <iostream>

using namespace std;

int main()
{
    int x = 5;

    // An if statement evaluates a condition and branches the code.
    if (x == 5) {
        // This print will only happen if x equals 5.
        cout << "Hello, world!" << endl;
    }

    /* A result from a comparison can be stored like so:
    bool comparisonResult = x == 5;
    There are several such operators: <, >, ==, !=, >=, <=
    Note: a False is 0. A True is everything but 0. */

    /* This is a pointer. A pointer is a special variable which
    points to a memory address. We can then dereference a pointer to access
    the value stored in that memory address. More on this later.*/
    const char* ptr = "Hello";

    // We can do an "else" or an "else if" for every other instance of a check.
    if (!ptr) {
        cout << "Pointer is null!" << endl;
    } else if (ptr == "Hello") {
        cout << "Pointer is Hello!" << endl;
    } else {
        cout << ptr <<endl;
    }

    return 0;
}
