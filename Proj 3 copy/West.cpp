#include "West.h"
#include <iostream>

using namespace std;

//constructors
West::West(int topPolicyIn) {
    authority = 40;
    personality = 40;
    economy = 60;
    support = 60;
    numDecisions = 0;
    topPolicy = topPolicyIn;
}
//Member functions
int West::getAuthority() { return authority; };
int West::getPersonality() { return personality; };
int West::getEconomy() { return economy; };
int West::getSupport() { return support; };
int West::getNumDecisions() { return numDecisions; };
void West::addAuthority(int add) { authority += add; };
void West::addPersonality(int add) { personality += add; };
void West::addEconomy(int add) { economy += add; };
void West::addSupport(int add) { support += add; };
string West::winning() {  }; //return whos winning

