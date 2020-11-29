#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <fstream>
#include <unistd.h>
#include "Player.h"
#include "North.h"
#include "South.h"
#include "SouthEast.h"
#include "West.h"
#include "Game.h"
#include "TextRunner.h"

using namespace std;

//menu function

void menu(){
    // this will print the menu (duh)
    
    cout <<"####################" << endl;
    cout << "It is your turn! Here are your options!" << endl;
    cout << "1, Go to a Region" << endl;
    cout << "2, Take the tutorial" << endl;
    cout << "3, Coup Now" << endl;
    cout << "4, Quit Game" << endl;
    cout << "####################" << endl;

}

void endMenu() {
    //this will print the end of game menu
    cout << "Game Over" << endl;
    cout << "Nobody ever wins" << endl;
}

void tutorial() {
    //print game tutorial
    cout << "This game has two parties, communist and fascist" << endl;
    cout << "Your political battle ground is divided into four regions" << endl;
    cout << "Each region has different statistics, at the end of the game" << endl;
    cout << "these stats determine whether you win or not." << endl;
    cout << "Each decision you make, changes these stats, same with your opponent" << endl;
    cout << "So make your decisions carefully, winning this game is difficult" << endl;
    cout << "At any point you can coup now, which ends the game where you are\nand determines if you would be elected or not\nthis is risky, but still an option" << endl;
    cout << "There is no perfect path to victory, but there is optimal play" << endl;
    cout << "Happy Hunting       " << endl;
}

int main(){
    //variables
    string party, oParty;
    string name, oName;
    
    //do main things
    // run some stuff
    cout << "Yeeee Hawwww" << endl;
    sleep(4);
    //get paid, get laid, gatorade
    cout << "Welcome to the Election Trail\n What is your name?" << endl;// input name into name variable

    cout << "Now that you've chosen a name, Your next task is to pick your party!" << endl;

    cout << "Each party has different goals and ideals, and these will affect your in game decisions" << endl;
    sleep(3);// wait about 3000 miliseconds
    cout << "Now is your chance to choose your party, choose wisely, for this cannot be changed" << endl;
    sleep(1.5);// wait about 1500 miliseconds
    cout << "Enter 1 for Fascist, Enter 2 for Communist" << endl;
    sleep(1.5);
    // wait about 1500 miliseconds
    cout << "In this game, you have a political opponent, who will be your opposition the entire game." << endl;
    sleep(.5);

    cout << "What should we name your opponent?" << endl;
    // input opponent's name
    sleep(1);

    cout << "The game is all set up, now it's time for you to take your first step on the Election Trail" << endl;
    sleep(.5);
    cout << "BUM BUm Bum bummm" << endl;

    menu(); cout << endl;
    tutorial();
    //if we're feeling frisky loop up to 25 times
    for(int i = 0; i < 25; i++){
        int d;//decision for this turn
        //menu();


    }
}