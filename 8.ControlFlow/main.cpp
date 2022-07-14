#include <iostream>

using namespace std;

int main()
{
    // The continue key word.
    for (int i = 0; i < 5; ++i) {
        /* i % 2 is division but the result is the remainder of the division.
           A good way to easily find even numbers.
           This loop would print only odd numbers. */
        if (i % 2 == 0) {
            /* continue makes the loop execute it's last piece
               of code and start again. In this case ++i and go on. */
            continue;
        }
        cout << i << ". Hello, world!" << endl;
    }

    cout << "================" << endl;

    // The break key word.
    for (int i = 0; i < 5; ++i) {
        if ((i + 1) % 2 == 0) {
            /* break makes the loop end then and there.
               In this case it will be on the first odd number. In this case 1.
               The next code instruction will be outside the for loop. */
            break;
        }
        cout << i << ". Hello, world!" << endl;
    }

    // return can be used anywhere to exit the function.
    return 0;
}
