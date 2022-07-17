#include <iostream>

/* Inheritance allows us to have a hierarchy of classes.
   A base class can have some sort of functionality which can then
   be inherited by a subclass. For example an Apple class can inherit
   everything a Fruit class has. */

// Let's create a base class. It is a normal class.
class Entity {
public:
    float m_x, m_y;
public:

    /*
    Implementation of the function Move()
    params:
        float xa
        float ya
    return:
        void
    */

    void Move(float xa, float ya) {
        m_x += xa;
        m_y += ya;
    }
};

// Now let's create a child class which will inherit from Entity.
class Player : public Entity {
/* Player now has everything that Entity has in public.
   Let's add some more functionality which is specific only to Player. */
public:
    const char* m_name = "Ben";

public:

    /*
    Implementation of the function PrintName()
    params:
        void
    return:
        void
    */

    void PrintName() {
        std::cout << m_name << std::endl;
    }
};

int main()
{
    Player player1;

    player1.PrintName();
    player1.Move(5, 5);

    // Let's print the size of an Entity.
    std::cout << "Entity size in bytes:" << sizeof(Entity) << std::endl;

    // Compare this to the size of Player.
    std::cout << "Player size in bytes:" << sizeof(Player) << std::endl;

    return 0;
}
