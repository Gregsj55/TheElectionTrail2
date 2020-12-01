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
SouthEast::SouthEast(){
    authority = 0;
    personality = 0;
    economy = 0;
    support = 0;
    numDecisions = 0;
    topPolicy = 0;
}
void SouthEast::SouthEastSet(int top){
    authority = 55;
    personality = 55;
    economy = 45;
    support = 45;
    numDecisions = 0;
    topPolicy = top;
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
string SouthEast::winning() {
 
    if((economy + support) > (authority + personality)){
        return "communist";
    }
    else if((economy + support) < (authority + personality)){
        return "fascist";
    }
    else return "tied";
}
void SouthEast::questionrunner(bool a, int questionNum, bool opp) {
    ofstream file("file.txt", ios::app);
    switch (questionNum) {
        case 0: 
            if (a) {
                file << "Choice: y" << endl;
                authority += 4;
                file << "Authority +4" << endl;;
                personality -= 5;
                file << "personality -5" << endl;
            } else {
                file << "Choice: n" << endl;
                authority -= 4;
                file << "Authority -4" << endl;;
                personality += 5;
                file << "personality +5" << endl;
            }
            break;
        case 1: 
            if (a) {
                file << "Choice: y" << endl;
                economy -= 4;
                file << "Economy -3" << endl;;
                personality += 6;
                file << "personality +6" << endl;
            } else {
                file << "Choice: n" << endl;
                economy += 4;
                file << "Economy +4" << endl;;
                personality -= 6;
                file << "personality -6" << endl;
            }
            break;
        case 2: 
            if (a) {
                file << "Choice: y" << endl;
                economy -= 3;
                file << "Economy -3" << endl;;
                support += 6;
                file << "Support +6" << endl;
            } else {
                file << "Choice: n" << endl;
                economy += 3;
                file << "Economy +3" << endl;;
                support -= 6;
                file << "Support -6" << endl;
            } 
            break;
        case 3: 
            if (a) {
                file << "Choice: y" << endl;
                authority += 5;
                file << "Authority +5" << endl;;
                support -= 4;
                file << "Support -4" << endl;
            } else {
                file << "Choice: n" << endl;
                authority -= 5;
                file << "Authority -5" << endl;;
                support += 4;
                file << "Support +4" << endl;
            }
            break;
        case 4: 
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
        case 5: 
            if (a) {
                file << "Choice: y" << endl;
                authority += 5;
                file << "Authority +5" << endl;;
                support -= 3;
                file << "Support -3" << endl;
            } else {
                file << "Choice: n" << endl;
                authority -= 5;
                file << "Authority -5" << endl;;
                support += 3;
                file << "Support +3" << endl;
            }
            break;
        case 6: 
            if (a) {
                file << "Choice: y" << endl;
                authority += 4;
                file << "Authority +4" << endl;;
                personality -= 3;
                file << "Personality -3" << endl;
            } else {
                file << "Choice: n" << endl;
                authority -= 4;
                file << "Authority -4" << endl;;
                personality += 3;
                file << "Personality +3" << endl;
            }
            break;
        case 7: 
            if (a) {
                file << "Choice: y" << endl;
                personality += 3;
                file << "Personality +3" << endl;;
                economy -= 6;
                file << "Economy -6" << endl;
            } else {
                file << "Choice: n" << endl;
                personality -= 3;
                file << "Personality -3" << endl;;
                economy += 6;
                file << "Economy +6" << endl;
            }
            break;
        case 8: 
            if (a) {
                file << "Choice: y" << endl;
                personality += 6;
                file << "Personality +6" << endl;;
                economy -= 3;
                file << "Economy -3" << endl;
            } else {
                file << "Choice: n" << endl;
                personality -= 6;
                file << "Personality -6" << endl;;
                economy += 3;
                file << "Economy +3" << endl;
            }
            break;
        case 9: 
            if (a) {
                file << "Choice: y" << endl;
                authority += 5;
                file << "Authority +5" << endl;;
                economy -= 3;
                file << "Economy -3" << endl;
            } else {
                file << "Choice: n" << endl;
                authority -= 5;
                file << "Authority -5" << endl;;
                economy += 3;
                file << "Economy +3" << endl;
            }
            break;
    }
    if(!opp)numDecisions++;
    file.close();
}


