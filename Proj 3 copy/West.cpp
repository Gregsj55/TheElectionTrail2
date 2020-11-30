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
West::West(){
    authority = 0;
    personality = 0;
    economy = 0;
    support = 0;
    numDecisions = 0;
    topPolicy =0;
}
void West::WestSet(int top){
    authority = 40;
    personality = 40;
    economy = 60;
    support = 60;
    numDecisions = 0;
    topPolicy = top;
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
string West::winning() { return ""; }; //return whos winning
void West::questionrunner(bool a, int questionNum) {
    file.open("file.txt");
    switch (questionNum) {
        case 0: 
            if (a) {
                file << "Choice: y" << endl;
                authority += 6;
                file << "Authority +6" << endl;;
                personality -= 3;
                file << "Personality -3" << endl;
            } else {
                file << "Choice: n" << endl;
                authority -= 6;
                file << "Authority -6" << endl;;
                personality += 3;
                file << "Personality +3" << endl;
            }
            break;
        case 1: 
            if (a) {
                file << "Choice: y" << endl;
                support += 5;
                file << "Support +5" << endl;;
                personality -= 4;
                file << "Personality -4" << endl;
            } else {
                file << "Choice: n" << endl;
                support -= 5;
                file << "Support -5" << endl;;
                personality += 4;
                file << "Personality +4" << endl;
            }
            break;
        case 2: 
            if (a) {
                file << "Choice: y" << endl;
                personality += 6;
                file << "Personality +6" << endl;;
                economy -= 4;
                file << "Economy -4" << endl;
            } else {
                file << "Choice: n" << endl;
                personality -= 6;
                file << "Personality -6" << endl;;
                economy += 4;
                file << "Economy +4" << endl;
            }
            break;
        case 3: 
            if (a) {
                file << "Choice: y" << endl;
                economy += 5;
                file << "Economy +5" << endl;;
                authority -= 4;
                file << "Authority -4" << endl;
            } else {
                file << "Choice: n" << endl;
                economy -= 5;
                file << "Economy -5" << endl;;
                authority += 4;
                file << "Authority +4" << endl;
            } 
            break;
        case 4: 
            if (a) {
                file << "Choice: y" << endl;
                economy += 5;
                file << "Economy +5" << endl;;
                personality -= 3;
                file << "Personality -3" << endl;
            } else {
                file << "Choice: n" << endl;
                economy -= 5;
                file << "Economy -5" << endl;;
                personality += 3;
                file << "Personality +3" << endl;
            }
            break;
        case 5: 
            if (a) {
                file << "Choice: y" << endl;
                authority += 5;
                file << "Authority +5" << endl;;
                economy -= 4;
                file << "Economy -4" << endl;
            } else {
                file << "Choice: n" << endl;
                authority -= 5;
                file << "Authority -5" << endl;;
                economy += 4;
                file << "Economy -+4" << endl;
            }
            break;
        case 6: 
            if (a) {
                file << "Choice: y" << endl;
                support += 5;
                file << "Support +5" << endl;;
                personality -= 3;
                file << "Economy -3" << endl;
            } else {
                file << "Choice: n" << endl;
                support -= 5;
                file << "Support -5" << endl;;
                personality += 3;
                file << "Economy +3" << endl;
            }
            break;
        case 7: 
            if (a) {
                file << "Choice: y" << endl;
                support += 5;
                file << "Support +5" << endl;;
                personality -= 3;
                file << "Economy -3" << endl;
            } else {
                file << "Choice: n" << endl;
                support -= 5;
                file << "Support -5" << endl;;
                personality += 3;
                file << "Economy +3" << endl;
            }
            break;
        case 8: 
            if (a) {
                file << "Choice: y" << endl;
                personality += 6;
                file << "Personality +6" << endl;;
                authority -= 3;
                file << "Authority -3" << endl;
            } else {
                file << "Choice: n" << endl;
                personality -= 6;
                file << "Personality -6" << endl;;
                authority += 3;
                file << "Authority +3" << endl;
            }
            break;
        case 9: 
            if (a) {
                file << "Choice: y" << endl;
                economy += 5;
                file << "Economy +5" << endl;;
                authority -= 3;
                file << "Authority -3" << endl;
            } else {
                file << "Choice: n" << endl;
                economy -= 5;
                file << "Economy -5" << endl;;
                authority += 3;
                file << "Authority +3" << endl;
            }
            break;
    }
    file.close();
}


