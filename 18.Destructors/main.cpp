#include <iostream>

/* A destructor runs when an object is destroyed.
   The destructor is used to clean up any memory used by the object.
   If an object is allocated using new, the destructor will be called
   when delete is called on that same object.
   If it is a stack based object (future topic), when the object gets out
   of scope it will get deleted and the destructor will get called. */

/* An example when we want to have a destructor is when we manually allocate
   memory on the heap. We need to manually free the memory, otherwise we get memory
   leaks. (future topic) */

class Entity {
public:
    float x, y;

public:

    /*
    Implementation of a constructor Entity()
    params:
        void
    return:
        void
    */

    Entity() {
        x = 0.0f;
        y = 0.0f;

        std::cout << "Created Entity!" << std::endl;
    }

    /*
    Implementation of a constructor Entity()
    params:
        float X
        float Y
    return:
        void
    */

    Entity(float X, float Y) {
        x = X;
        y = Y;
    }

    /*
    Implementation of a destructor Entity()
    params:
        void
    return:
        void
    */

    ~Entity() {
        std::cout << "Destroyed Entity!" << std::endl;
    }

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

int main()
{
    // Let's create an entity. The constructor gets called here.
    Entity e;

    // Print x and y.
    e.Print();

    // The destructor gets called when we run out of scope.
    return 0;
}
