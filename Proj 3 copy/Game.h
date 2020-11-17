#ifndef GAME_H_
#define GAME_H_
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Player.h"
#include "Opponent.h"
#include "North.h"
#include "South.h"
#include "SouthEast.h"
#include "West.h"

using namespace std;

class Game{
private:
    int turn;
public:
    Game(string playa, string oppo, string playaParty, string oppoParty);
    bool isOver();
    bool winCondition();
    void playerTurn();
    void opponentTurn();
};

#endif