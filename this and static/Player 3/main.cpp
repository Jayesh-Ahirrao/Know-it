#include "player.h"
#include <iostream>
using namespace std;

int Player::playerCount = 0;

int maxWickets(Player players[], int size)
{
    int max = players[0].getWicketsTaken();

    for (int i = 1; i < size; i++)
    {
        if (players[i].getWicketsTaken() > max)
        {
            max = players[i].getWicketsTaken();
        }
    }

    return max;
}

int maxRuns(Player players[], int size)
{
    int max = players[0].getRuns();

    for (int i = 1; i < size; i++)
    {
        if (players[i].getRuns() > max)
        {
            max = players[i].getRuns();
        }
    }

    return max;
}

int main()
{
    int size = 2;
    Player players[size];

    for (int i = 0; i < size; i++)
    {
        players[i].accept();
    }

    for (int i = 0; i < size; i++)
    {
        players[i].display();
    }

    cout << endl
         << "Player with maximum runs is: " << maxRuns(players, 10);
    cout << endl
         << "Player with maximum runs is: " << maxWickets(players, 10);
}