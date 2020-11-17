#ifndef OPPONENT_H_
#define OPPONENT_H_
#include <string>
using namespace std;

class Opponent{
   



   private:

    string name;


    string party;


    int turncounter;

    int likeability; // starts at zero, grows indefinitely. +1 for right. You win if you get 17/25 of the decisions correct

   

   public:

    Opponent(string n, string p); // makes the opponent

    string getName(); // returns the name

    string getParty(); // returns the party


    void liked();//likability++

    int getLikeability(); // returns likeability score


   
    

};







#endif