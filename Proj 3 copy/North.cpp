#include "North.h"
#include <iostream>

using namespace std;

//constructors
North::North(int topPolicyIn) {
    authority = 40;
    personality = 40;
    economy = 60;
    support = 60;
    numDecisions = 0;
    topPolicy = topPolicyIn;
}
//Member functions
int North::getAuthority() { return authority; };
int North::getPersonality() { return personality; };
int North::getEconomy() { return economy; };
int North::getSupport() { return support; };
int North::getNumDecisions() { return numDecisions; };
void North::addAuthority(int add) { authority += add; };
void North::addPersonality(int add) { personality += add; };
void North::addEconomy(int add) { economy += add; };
void North::addSupport(int add) { support += add; };
string North::winning() {  }; //return whos winning

