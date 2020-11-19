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
        westVect.push_back();
        westVect[i] = i;
        //and so on
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
    //randomly get 1 number from vector, then remove it from vector
    //give choice
    //get user input
    //change state veiws based on choice
    numTurns++;
}
void TextRunner::southChoice() {
    //randomly get 1 number from vector, then remove it from vector
    //give choice
    //get user input
    //change state veiws based on choice
    numTurns++;
}
void TextRunner::northChoice() {
    //randomly get 1 number from vector, then remove it from vector
    //give choice
    //get user input
    //change state veiws based on choice
    numTurns++;
}
void TextRunner::southEastChoice() {
    //randomly get 1 number from vector, then remove it from vector
    //give choice
    //get user input
    //change state veiws based on choice
    numTurns++;
}
