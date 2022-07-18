#include <iostream>

/* Virtual functions allow us to overwrite methods in subclasses. */

class Entity {
public:

    /*
    Implementation of the function GetName()
    params:
        void
    return:
        std::string
    */

    virtual std::string GetName() {
        return "Entity";
    }
};

class Player : public Entity {
private:
    std::string m_Name;
public:

    /*
    Implementation of the constructor Player()
    params:
        void
    return:
        void
    */

    // We can assign parameters in a different way like so.
    Player(const std::string& name) : m_Name(name) {}

    /*
    Implementation of the function GetName()
    params:
        void
    return:
        std::string
    */

    // override is just to indicate that this is an overridden function and keeps us honest.
    std::string GetName() override {
        return m_Name;
    }
};

/* This is where it gets really problematic. A Player is an Entity.
   Therefore, regardless if we passs an Entity or a Player the function
   PrintName() would always print "Entity". */

/*
Implementation of the function PrintName()
params:
    Entity* entity
return:
    void
*/

void PrintName (Entity* entity) {
    std::cout << entity->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity;

    std::cout << e->GetName() << std::endl;

    Player* p = new Player("John");

    std::cout << p->GetName() << std::endl;

    /* This whole thing will work without virtual functions.
       However if we refer to the player as an entity it falls apart. */

    Entity* e1 = p;

    // This prints "Entity", which is wrong if the Entity's class function is not virtual.
    std::cout << e1->GetName() << std::endl;

    /* Virtual functions require memory for the V Table (future topic.)
       Every time a virtual function is called the table is searched in order
       to find out to which function is it mapped to. This adds cost to using virtual
       functions. */

    return 0;
}
