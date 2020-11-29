#ifndef GAME_H_
#define GAME_H_
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Player.h"
#include "North.h"
#include "South.h"
#include "SouthEast.h"
#include "West.h"
#include "TextRunner.h"

using namespace std;

class Game{

    private:

    int turn;
    North n1;
    South s1;
    SouthEast se1;
    West w1;
    TextRunner text;

    public:

    Game(string playa, string oppo, string playerparty, string oppoparty); // default constructor
    bool winCondition(); // calculate winner
    bool playerTurn(); //player actions
    void opponentTurn(); //opponent actions
    
};

#endif