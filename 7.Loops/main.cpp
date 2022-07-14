#include <iostream>

using namespace std;

// We use loops to do something multiple times.
int main()
{
    /* Syntax for a for loop:
       <declaration>; <exit condition>; <final code before rerunning> */
    for (int i = 0; i < 5; ++i) {
        cout << "[for] Hello world!" << endl;
    }

    cout << "==================" << endl;

    /* Syntax for a while loop.
       while (exit condition) */
    int i = 0;
    while (i < 5) {
        cout << "[while] Hello world!" << endl;
        ++i;
    }

    cout << "==================" << endl;

    /* Syntax for a do while loop.
       do {body with code} while (exit condition); */
    int j = 0;
    do {
        cout << "[do while] Hello world!" << endl;
        ++j;
    } while (j < 5);

    return 0;
}
