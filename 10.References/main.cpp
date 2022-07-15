#include <iostream>

using namespace std;

/*
Implementation of the function Increment()
params:
    int value
return:
    void
*/

void Increment (int value)
{
    ++value;
}

/*
Implementation of the function refIncrement()
params:
    int &value
return:
    void
*/

void refIncrement (int &value)
{
    ++value;
}

int main()
{
    /* A reference is a way to get the address of a piece of memory. */
    int a = 5;
    // Creating an alias of a.
    int& refa = a;

    // From here on we can use refa instead of a.
    cout << refa << endl;
    refa = 3;
    cout << refa << endl;

    // Usually, a function makes a copy of the passed value. See the function definition.
    Increment (refa);
    cout << refa << endl;

    // To actually operate on the variable we pass to a function we need to pass by reference.
    refIncrement (refa);
    cout << refa << endl;

    // Note: A reference can be set once. It cannot be changed after.

    return 0;
}
