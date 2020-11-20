#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
using namespace std;

class Player{
   private:
    string name;
    string party;
    int turncounter; // starts at zero
    int likeability; // starts at zero, grows indefinitely. +1 for right. You win if you get 17/25 of the decisions correct
   public:
    Player(string n, string p);
    string getName(); // returns name
    string getParty(); // returns party affiliation
    void liked();// increments the likability score by one
    int Player::getLikeability(); // returns likability score
};
#endif