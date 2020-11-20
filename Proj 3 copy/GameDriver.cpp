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

using namespace std;

//menu function

void menu(){
    // this will print the menu (duh)
    
    cout <<"####################" << endl;

}

void endMenu() {
    //this will print the end of game menu
}

void tutorial() {
    //print game tutorial
}

int main(){
    //variables
    string party, oParty;
    string name, oName;
    
    //do main things
    // run some stuff
    cout << "Yeeee Hawwww" << endl;
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



    
    //if we're feeling frisky loop up to 25 times
    for(int i = 0; i < 25; i++){

        // Call the menu class, ask the user what to do
        menu();

    }
}