#include <iostream>

using namespace std;

// We use loops to do something multiple times.
int main()
{
    /* Syntax for a for loop.
       Declaration, exit condition, final code before rerunning. */
    for (int i = 0; i < 5; ++i) {
        cout << "Hello world!" << endl;
    }

    cout << "==================" << endl;

    /* Syntax for a while loop.
       while (exit condition) */
    int i = 0;
    while (i < 5) {
        cout << "Hello world!" << endl;
        ++i;
    }

    cout << "==================" << endl;

    /* Syntax for a while loop.
       do {body with code} while (exit condition); */
    int j = 0;
    do {
        cout << "Hello world!" << endl;
        ++j;
    } while (j < 5);

    return 0;
}
