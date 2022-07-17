#include <iostream>

/* A constructor is a method that runs every time an object is
   instantiated. */

class Entity {
public:
    float x, y;

public:

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

/* A constructor is a method that runs every time an object is
   instantiated. */

class CEntity {
public:
    float x, y;

public:

    /*
    Implementation of the constructor Entity()
    params:
        void
    return:
        void
    */

    CEntity() {
        x = 0.0f;
        y = 0.0f;
    }

    /*
    Implementation of a constructor Entity()
    params:
        float X
        float Y
    return:
        void
    */

    CEntity(float X, float Y) {
        x = X;
        y = Y;
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

/* There are two ways to remove a constructor.
   1. Make the constructor private.
   2. delete it. */

class Log {
    Log() = delete;
private:
//    Log() {}
public:
    static void Write () {
        // do something
    }
};

int main()
{
    Entity e;

    // If we print the x and y of the entity they will be random.
    e.Print();

    // We can fix this with a constructor.
    CEntity e1;

    // e1 now has initialized values for x and y. Therefore it prints 0, 0.
    e1.Print();

    /* Even if we do not specify a constructor, a class has a default constructor.
       However, that constructor does nothing. It is basically empty. */

    // Let's create a CEntity by passing parameters to the constructor.
    CEntity e2(3.5f, 5.7f);

    e2.Print();

    return 0;
}
