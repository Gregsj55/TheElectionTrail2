#include "South.h"
#include <iostream>

using namespace std;

//constructors
South::South(int topPolicyIn) {
    authority = 60;
    personality = 60;
    economy = 40;
    support = 40;
    numDecisions = 0;
    topPolicy = topPolicyIn;
}
//Member functions
int South::getAuthority() { return authority; };
int South::getPersonality() { return personality; };
int South::getEconomy() { return economy; };
int South::getSupport() { return support; };
int South::getNumDecisions() { return numDecisions; };
void South::addAuthority(int add) { authority += add; };
void South::addPersonality(int add) { personality += add; };
void South::addEconomy(int add) { economy += add; };
void South::addSupport(int add) { support += add; };
string South::winning() {  }; //return whos winning
void South::printDetails() {  }; //file reading

