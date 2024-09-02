#include "player.h"

int Player::playerCount = 0;

int main()
{
    Player p1;
    Player p2(100, 1, 1, "Jayesh");
    Player p3(100, 1, 1, "Satyam");

    p1.display();
    p2.display();
    p3.display();
}