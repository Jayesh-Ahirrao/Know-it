#include "player.h"
#include <string.h>
#include <iostream>
using namespace std;

Player::Player()
{
    this->id = this->playerCount;
    this->runs = 0;
    this->inningsPlayed = 0;
    this->wicketsTaken = 0;
    strcpy(this->name, "New Player");

    this->playerCount++;
}

Player::Player(int runs, int inningsPlayed, int wicketsTaken, const char *name)
{
    this->id = this->playerCount;
    this->runs = runs;
    this->inningsPlayed = inningsPlayed;
    this->wicketsTaken = wicketsTaken;
    strcpy(this->name, name);

    this->playerCount++;
}

void Player::display()
{
    cout << endl
         << "Player Details" << endl
         << "id: " << this->id << endl
         << "runs: " << this->runs << endl
         << "inningsPlayed: " << this->inningsPlayed << endl
         << "wickets taken: " << this->wicketsTaken << endl
         << this->name << endl;
}