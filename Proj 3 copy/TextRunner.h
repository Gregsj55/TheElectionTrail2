#ifndef TEXTRUNNER_H
#define TEXTRUNNER_H

#include <iostream>
#include <vector>
#include <fstream>
#include "North.h"
#include "West.h"
#include "South.h"
#include "SouthEast.h"

using namespace std;

class TextRunner {
private:
    int numTurns;
    //vectors of the options avalible
    vector<int> westVect;
    vector<int> northVect;
    vector<int> southVect;
    vector<int> southEastVect;

    //file
public:
    //constructor
    TextRunner();
    //member functions -- the choices give the text for every choice and write to the files
    int westChoice();
    int northChoice(); 
    int southChoice();
    int southEastChoice();
    int getNumTurns();
    void setNumTurns(int numTurnsIn);
};

#endif
