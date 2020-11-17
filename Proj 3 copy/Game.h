#ifndef GAME_H_
#define GAME_H_
#include <string>
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