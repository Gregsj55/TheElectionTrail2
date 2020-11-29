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
        s1.SouthSet(0);
        se1.SouthEastSet(1);
    } else {
        s1.SouthSet(1);
        se1.SouthEastSet(0);
    }

    int b = rand() % 2;
    if( b == 0){
        n1.NorthSet(2);
        w1.WestSet(3);
    } else{
        n1.NorthSet(3);
        w1.WestSet(2);
    }
}

bool Game::playerTurn(){
    int input;
    string inString;
    int choice;
    string uChoice;
    //do player turn things
    cout << "What region would you like to select: " << endl;
    cout << "1. North" << endl;
    cout << "2. South" << endl;
    cout << "3. SouthEast" << endl;
    cout << "4. West" << endl;
    //get input
    getline(cin,inString);
    input = stoi(inString);
    //do  the things based on input
    //return true if successful, false if not
    if (input == 1) {
        if (n1.getNumDecisions() < 10) {
            choice = text.northChoice();
            getline(cin,uChoice);
            if (uChoice[0] == 'y') {
                n1.questionrunner(true,choice);
            } else if (uChoice[0] == 'n') {
                n1.questionrunner(false,choice);
            } else {
                return false;
            }
            return true;
        } else {
            cout << "You have finished all of the decisions in the North, please choose again." << endl;
            return false;
        }
    } else if (input == 2) {
        if (s1.getNumDecisions() < 10) {
            choice = text.southChoice();
            getline(cin,uChoice);
            if (uChoice[0] == 'y') {
                s1.questionrunner(true,choice);
            } else if (uChoice[0] == 'n') {
                s1.questionrunner(false,choice);
            } else {
                return false;
            }
            return true;
        } else {
            cout << "You have finished all of the decisions in the South, please choose again." << endl;
            return false;
        }
    } else if (input == 3) {
        if (se1.getNumDecisions() < 10) {
            choice = text.southEastChoice();
            getline(cin,uChoice);
            if (uChoice[0] == 'y') {
                se1.questionrunner(true,choice);
            } else if (uChoice[0] == 'n') {
                se1.questionrunner(false,choice);
            } else {
                return false;
            }
            return true;
        } else {
            cout << "You have finished all of the decisions in the South East, please choose again." << endl;
            return false;
        }
    } else if (input == 4) {
        if (w1.getNumDecisions() < 10) {
            choice = text.westChoice();
            getline(cin,uChoice);
            if (uChoice[0] == 'y') {
                w1.questionrunner(true,choice);
            } else if (uChoice[0] == 'n') {
                w1.questionrunner(false,choice);
            } else {
                return false;
            }
            return true;
        } else {
            cout << "You have finished all of the decisions in the West, please choose again." << endl;
            return false;
        }
    } else {
        cout << "You did not enter a valid number, please choose again." << endl;
        return false;
    }
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
