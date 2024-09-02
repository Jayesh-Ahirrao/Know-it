#include "player.h"

int Player::playerCount = 0;

int main()
{
    Player players[10];

    for (int i = 0; i < 10; i++)
    {
        players[i].accept();
    }

    for (int i = 0; i < 10; i++)
    {
        players[i].display();
    }
}