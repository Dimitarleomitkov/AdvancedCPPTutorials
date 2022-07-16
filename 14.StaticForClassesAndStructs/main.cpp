#include <iostream>

/* Static with a variable in a class means that there is going
   to be only one instance of that variable across all instances
   of the class. (All objects created of that class have the same
   shared variable)*/

/* Static methods cannot refer to the class instance, because
   they are somewhat global through all class instances. They would not
   know which instance does the user refer to. */

// Let's create a struct.
struct Entity {
    int x, y;

    /*
    Implementation of the function Print()
    params:
        void
    return:
        void
    */

    void Print() {
        std::cout << x << ", " << y << std::endl;
    }
};

// Let's create a struct with static variables.
struct SEntity {
    static int x, y;

    /*
    Implementation of the function Print()
    params:
        void
    return:
        void
    */

    void Print() {
        std::cout << x << ", " << y << std::endl;
    }
};

/* The linker needs the definitions of the static variables somewhere
   outside the class. */
int SEntity::x;
int SEntity::y;

/* Static methods cannot access non-static variables. */
// Let's create a struct with static variables.
struct StEntity {
    static int x, y;

    /*
    Implementation of the function Print()
    params:
        void
    return:
        void
    */

    static void Print() {
        std::cout << x << ", " << y << std::endl;
    }
};

int StEntity::x;
int StEntity::y;

int main()
{
    Entity e;

    e.x = 2;
    e.y = 3;

    // Initializing another object with an initializer.
    Entity e1 = { 5, 8 };

    // Let's print the entities.
    e.Print();
    e1.Print();

    std::cout << std::endl;

    // Let's see the same thing with a struct which has static variables.
    SEntity e2;
    SEntity e3;

    // Set the static variables to 2 and 3.
    e2.x = 2;
    e2.y = 3;

    // Print both instances of the struct.
    e2.Print();
    e3.Print();

    // Set the static variables through the second instance of that struct.
    e3.x = 5;
    e3.y = 8;

    // Print both instances of the struct.
    e2.Print();
    e3.Print();

    // In reality the best way to use x and y when they are static is like this.
    SEntity::x = 10;
    SEntity::y = 11;

    // Now we can print it from any instance of the class/struct.
    e2.Print();
    e3.Print();

    std::cout << std::endl;

    // Let's use a static method.
    StEntity e4, e5;

    e4.x = 15;
    e5.y = 16;

    StEntity::Print();

    return 0;
}
