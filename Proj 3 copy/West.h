#ifndef WEST_H
#define WEST_H

#include <iostream>
#include <fstream>

using namespace std;

class West {
private:
    //variables
    int authority; //fascist 0-99
    int personality; // fascist 0-99
    int economy; //communist 0-99
    int support; //communist 0-99
    int numDecisions; //up to 10
    int topPolicy; //0-3 determined in game class
public:
    //constructors
    West(int topPolicyIn);
    West();
    void WestSet(int top);
    //Member functions
    int getAuthority();
    int getPersonality();
    int getEconomy();
    int getSupport();
    int getNumDecisions();
    void addAuthority(int add);
    void addPersonality(int add);
    void addEconomy(int add);
    void addSupport(int add);
    string winning(); //return whos winning
    void questionrunner(bool a, int questionNum, bool opp);
};

#endif