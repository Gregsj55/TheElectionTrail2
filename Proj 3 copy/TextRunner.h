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
    //idk why these dont work
    vector<int> westVect;
    vector<int> northVect;
    vector<int> southVect;
    vector<int> southEastVect;
public:
    //constructor
    TextRunner(West westIn, North northIn, South southIn, SouthEast southEastIn);
    //member functions
    void westChoice();
    void northChoice(); 
    void southChoice();
    void southEastChoice();
    int getNumTurns();
    void setNumTurns(int numTurnsIn);
};

#endif
