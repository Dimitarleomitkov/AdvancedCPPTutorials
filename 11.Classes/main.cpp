#include <iostream>

using namespace std;

/* The only difference between classes and structs
   is the visibility. A Class is private by default.
   A Struct is public by default. */

// Classes are a way to group data and functionality together.
// Classes are basically a new variable type.
// class <Name>
class Player {
// Visibility needs to be public (future topic)
public:
    int x, y;
    int speed = 2;

    /* Let's have this Move function into the class. It makes more sense that way.
       Functions inside classes are called methods. */
    void Move (int xamount, int yamount);
protected:
private:
};

/*
Implementation of the function Player::Move()
params:
    int xamount
    int yamount
return:
    void
*/

void Player::Move (int xamount, int yamount)
{
    x += xamount * speed;
    y += yamount * speed;
}

/*
Implementation of the function Player::Move()
params:
    Player& player
    int xamount
    int yamount
return:
    void
*/

void Move (Player& player, int xamount, int yamount)
{
    player.x += xamount * player.speed;
    player.y += yamount * player.speed;
}

int main()
{
    // Let's create a player. P1 is an object.
    Player P1;

    // Set the player's x and y.
    P1.x = 5;
    P1.y = 3;

    cout << "Player1 position: " << P1.x << " | " << P1.y << endl;

    // Let's move and see what is going on.
    Move (P1, 1, -1);
    cout << "Player1 position: " << P1.x << " | " << P1.y << endl;

    // Let's try with a second player.
    Player P2;

    P2.x = 10;
    P2.y = 10;

    cout << "Player2 position: " << P2.x << " | " << P2.y << endl;

    // It does not make sense to pass the player now. We know Player2 calls his own function Move.
    P2.Move (4, -3);
    cout << "Player2 position: " << P2.x << " | " << P2.y << endl;

    return 0;
}
