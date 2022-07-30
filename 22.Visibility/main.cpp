#include <iostream>

// The default visibility is private.
class Entity {
/* Only this class and a friend can access
   these private memebers and/or functions. */
private:
    int m_x, m_y;
    void Print() {
        return;
    }

/* This class and all subclasses can access protected. */
protected:
    int protected_var;

/* Public is seen by everyone */
public:

};

// Player is a subclass of Entity.
class Player : public Entity {
    /* Player cannot call or use any private things from Entity.
    Player can access protected and public of Entity. */
public:
    void access_protected_var() {
        protected_var = 5;
        std::cout << protected_var << std::endl;
    }
};


int main()
{
    /* Making everything public is a bad idea. Portected and private
    protect other users of the code and against your own mistakes. Visibility
    does not do anything else specifically in the code. */
    Player p1;

    p1.access_protected_var();

    return 0;
}
