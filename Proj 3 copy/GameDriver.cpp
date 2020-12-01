#include <iostream>
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
    cout << "4, Check winning" << endl;
    cout << "5, Quit Game" << endl;
    cout << "####################" << endl;
    cout << "\nWhich option would you like to choose: " << endl;

}

void endMenu(bool win) {
    string entry;
    //this will print the end of game menu
    sleep(3);
    cout << "\n\nGame Over" << endl;
    while (entry != "3") {
        cout <<"####################" << endl;
        cout << "What would you like to see from the game!" << endl;
        cout << "1, Past decisons" << endl;
        cout << "2, Curse at your opponent" << endl;
        cout << "3, Quit menu and game" << endl;
        cout << "####################" << endl;
        cout << "\nWhich option: " << endl;
        getline(cin,entry);
        if (entry == "1") {
            //print all lines
            string line;
            ifstream file("file.txt");
            while(getline(file,line)) {
                cout << line << endl;
            }
            cout << "Thats it, you can scroll up to read if you would like" << endl;
        } else if (entry == "2") {
            //things to print in wither case
            if (win == true) {
                cout << "You absolute buffon, a monkey could have beaten you!" << endl;
                cout << "*** You have forgotten that he cannot respond as he reacently passed away rather suspiciously ***" << endl;
            } else {
                cout << "You silly old man, the election must have been rigged!" << endl;
                cout << "*** You have forgotten that he cannot hear as he reacently... disposed of you :) ***" << endl;
            }
        } else if (entry == "3") {
            cout << "See ya next time!" << endl;
            return;
        } else {
            cout << "Well that looks wrong, try again!" << endl;
        }
    }
}

void tutorial() {
    string useless;
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
    cout << "Press enter to leave. " << endl;
    getline(cin,useless);
}

int main(){
    std::ofstream ofs;
    ofs.open("file.txt", std::ofstream::out | std::ofstream::trunc);
    ofs.close();
    //variables
    string party, oParty;
    string name, oName;
    string entry, region;
    bool ran = false;
    bool win = false;
    
    //do main things
    // run some stuff
    cout << "Yeeee Hawwww" << endl;
    sleep(2);
    //get paid, get laid, gatorade
    cout << "Welcome to the Election Trail\n What is your name?" << endl;// input name into name variable
    getline(cin,name);

    cout << "Now that you've chosen a name, Your next task is to pick your party!" << endl;

    cout << "Each party has different goals and ideals, and these will affect your in game decisions" << endl;
    sleep(2);// wait about 3000 miliseconds
    cout << "Now is your chance to choose your party, choose wisely, for this cannot be changed" << endl;
    sleep(1);// wait about 1000 miliseconds
    cout << "Enter 1 for Fascist, Enter 2 for Communist" << endl;
    
    getline(cin,party);
    //keep  looping untill correct entry
    while (party != "69") {
        if(party == "1") {
            party = "communist";
            oParty = "fascist";
            break;
        } else if (party == "2") {
            oParty = "communist";
            party = "fascist";
            break;
        } else {
            cout << "Invaild entry, try again" << endl;
            getline(cin,party);
        }
    }
    sleep(1);
    // wait about 1000 miliseconds
    cout << "In this game, you have a political opponent, who will be your opposition the entire game." << endl;
    sleep(1);

    cout << "What should we name your opponent?" << endl;
    getline(cin,oName);
    sleep(1);
    cout << "Do you want the game long, normal, or short" << endl;
    cout << "l,n,s to choose game length" << endl;
    string zz;
    int z;
    getline(cin,zz);
    if(zz == "l")z = 25;
    if(zz == "n")z = 15;
    if(zz == "s")z = 10;
    Game game1(name,oName,party,oParty);
    cout << "The game is all set up, now it's time for you to take your first step on the Election Trail" << endl;
    sleep(1);
    cout << "BUM BUm Bum bummm" << endl;

    tutorial();
    //if we're feeling frisky loop up to 25 times
    for(int i = 0; i < z; i++){
        // Write what turn it is in the file
        // Turn 1:
        ofstream file("file.txt", ios::app);
        file << "\nTurn: " << i+1 << endl;
        file << name << "'s action:" << endl;
        file.close();
        menu();
        getline(cin,entry);
        while (entry != "69") {
            if (entry == "1") {
                ran = false;
                while (ran == false) {
                    ran = game1.playerTurn();
                }
                cout << "Good choice!" << endl;
                ofstream file("file.txt", ios::app);
                file << oName << "'s action:" << endl;
                file.close();
                ran = false;
                while (ran == false) {
                    ran = game1.opponentTurn();
                }
                sleep(2);
                break;
            } else if (entry == "2") {
                tutorial();
            } else if (entry == "3") {
                win = game1.winCondition();
                endMenu(win);
                return 0; // end the program
            } else if (entry == "4") {
                game1.winning();
            } else if (entry == "5") {
                cout << "See ya next time!" << endl;
                return 0;
            } else {
                cout << "Well that looks wrong, try again!" << endl;
            }
            menu();
            getline(cin,entry);
        }
    }
    win = game1.winCondition();
    endMenu(win);
}