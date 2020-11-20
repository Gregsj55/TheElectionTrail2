#include "SouthEast.h"
#include <iostream>

using namespace std;

//constructors
SouthEast::SouthEast(int topPolicyIn) {
    authority = 60;
    personality = 60;
    economy = 40;
    support = 40;
    numDecisions = 0;
    topPolicy = topPolicyIn;
}
//Member functions
int SouthEast::getAuthority() { return authority; };
int SouthEast::getPersonality() { return personality; };
int SouthEast::getEconomy() { return economy; };
int SouthEast::getSupport() { return support; };
int SouthEast::getNumDecisions() { return numDecisions; };
void SouthEast::addAuthority(int add) { authority += add; };
void SouthEast::addPersonality(int add) { personality += add; };
void SouthEast::addEconomy(int add) { economy += add; };
void SouthEast::addSupport(int add) { support += add; };
string SouthEast::winning() {  }; //return whos winning

