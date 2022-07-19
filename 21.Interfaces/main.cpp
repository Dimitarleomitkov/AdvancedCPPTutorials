#include <iostream>

/* Pure virtual functions allow the definition of a function without
   an implementation. The implementation happens in the subclass. */

// A class with only pure virtual functions is called an intefrace.

// Create an interface
class Printable {
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable {
public:

    /*
    Implementation of the function GetName()
    params:
        void
    return:
        std::string
    */

    // Making a pure virtual function.
    virtual std::string GetName() = 0;

    /*
    Implementation of the function GetClassName()
    params:
        void
    return:
        std::string
    */

    std::string GetClassName() override {
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

    /*
    Implementation of the function GetClassName()
    params:
        void
    return:
        std::string
    */

    std::string GetClassName() override {
        return "Player";
    }
};

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

/*
Implementation of the function Print()
params:
    Printable obj
return:
    void
*/

void Print (Printable* obj) {
    std::cout << obj->GetClassName() << std::endl;
}

int main()
{
    // We can no longer instantiate the class Entity.
//    Entity* e = new Entity;

    // We can create an entity with a subclass that has the virtual function implemented.
    Entity* e = new Player("");
    // If Player does not have the function implemented the above line would not work also.

    std::cout << e->GetName() << std::endl;

    Player* p = new Player("John");

    std::cout << p->GetName() << std::endl;

    Print(e);
    Print(p);

    return 0;
}
