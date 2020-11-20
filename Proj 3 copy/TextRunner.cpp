#include "TextRunner.h"
#include "North.h"
#include "West.h"
#include "South.h"
#include "SouthEast.h"
#include <iostream>
#include <stdlib.h> // for rand
#include <time.h> // to actually get random numbers 
using namespace std;

TextRunner::TextRunner(West westIn, North northIn, South southIn, SouthEast southEastIn) {
    //initialize vectors
    for (int i = 0; i < 10; i++) {
        westVect.push_back(i);
        northVect.push_back(i);
        southVect.push_back(i);
        southEastVect.push_back(i);
    }
    //set random time seed every time
    srand(time(NULL));

    numTurns = 0;
    West westObj = westIn;
    North northObj = northIn;
    South southObj = southIn;
    SouthEast southEastObj = southEastIn;
}

int TextRunner::getNumTurns() {
    return numTurns;
}
void TextRunner::setNumTurns(int numTurnsIn) {
    numTurns = numTurnsIn;
}
void TextRunner::westChoice() {
    int random = rand()%westVect.size();
    //give choice
    //get user input
    //change state veiws based on choice
    //print to file
    numTurns++;
    westVect.erase(westVect.begin()+random);
}
void TextRunner::southChoice() {
    int random = rand()%westVect.size();
    //give choice
    //get user input
    //change state veiws based on choice
    //print to file
    numTurns++;
    westVect.erase(westVect.begin()+random);
}
void TextRunner::northChoice() {
    int random = rand()%westVect.size();
    //give choice
    //get user input
    //change state veiws based on choice
    //print to file
    numTurns++;
    westVect.erase(westVect.begin()+random);
}
void TextRunner::southEastChoice() {
    int random = rand()%westVect.size();
    //give choice
    //get user input
    //change state veiws based on choice
    //print to file
    numTurns++;
    westVect.erase(westVect.begin()+random);
}
