#include <iostream>
/* An ENUM is a set of values. An ENUM gives a name
   to values. */

enum Example {
    A = 0,
    B = 1,
    C = 2
};

/* We can specify the type of integer we want the enum to be.
   We do not need to write out every value of an enum. They start from 0,
   unless specifed (like in this case from 6) and increment with 1. E would be 7.
   F would be 8. */
enum Example2 : unsigned char {
    D = 6,
    E,
    F
};

int main()
{
    // Let's use the enum. This way we cannot assign something else except A, B or C.
    Example value = B;

    /* B is part of the enum Example and is equal to 1. But we do not need
    to know this. A, B and C in this case are used like constants. */
    if (value == B) {
        std::cout << "The value is 1 == B." << std::endl;
    }

    // Let's test the second enum.
    Example2 value2 = F;

    if (value2 == 8) {
        std::cout << "F == 8" << std::endl;
    }

    return 0;
}
