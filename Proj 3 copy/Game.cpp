#include <iostream>
#include "Game.h"
using namespace std;


Game::Game(string playa, string oppo, string playerparty, string oppoparty){
    srand(time(NULL));
    turn = 0;
        
    Player p(playa, playerparty);
    Player o(oppo, oppoparty);

    Player people[2] = {p,o};

    // sets up player and opponent objects for the game.

    // Set up the region objects with their random ideas

    // 0 is authority
    // 1 is personality
    // 2 is economy
    // 3 is support

    // for the south,
    int a = rand() % 2;

    if( a == 0){
        South s1(0);
        SouthEast se1(1);
    } else {
        South s1(1);
        SouthEast se1(0);
    }

    int b = rand() % 2;
    if( b == 0){
        North n1(2);
        West w1(3);
    } else{
        North n1(3);
        West w1(2);
    }
}

void Game::playerTurn(){
    //do player turn things
    //menu for region to go to
    //user input for region
    //check if region has been used out of choices
    //call TextRunner for that region
}
void Game::opponentTurn(){
    // make the opponent stuff
    //same as opponent but no choices
}
bool Game::winCondition() {
    //check stats with a search sort algorithm 
    //to determine winner and play text for end of game
    //called after 25 turns
    //can read from file that is being written to
    //has menu function in GameDriver
}
