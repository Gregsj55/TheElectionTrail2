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
South::South(){
    authority = 0;
    personality = 0;
    economy = 0;
    support = 0;
    numDecisions = 0;
    topPolicy = 0;
}
void South::SouthSet(int top){
    authority = 60;
    personality = 60;
    economy = 40;
    support = 40;
    numDecisions = 0;
    topPolicy = top;
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

string South::winning() { return ""; }; //return whos winning
void South::questionrunner(bool a, int questionNum) {
    file.open("file.txt");
    switch (questionNum) { // All of the text is in textrunner, this code is for the stat changes of each decision corresponding with each question
        case 0: 
            if (a) {
                file << "Choice: y" << endl;
                authority +=4;
                file << "Authority +4" << endl;
                economy -= 3;
                file << "Economy -3" << endl;
                
            } else {
                file << "Choice: n" << endl;
                authority -=3;
                economy += 4;
                file << "Authority -3" << endl;
                file << "Economy +4" << endl;
                
            }
            break;
        case 1: 
            if (a) {
                file << "Choice: y" << endl;
                personality +=4;
                support -= 3;
                file << "Personality +4" << endl;
                file << "Support -3" << endl;
                
            } else {
                file << "Choice: n" << endl;
                personality -=3;
                support += 4;
                file << "Personality -3" << endl;
                file << "Support -4" << endl;
                
            }
            break;
        case 2: 
            if (a) {
                file << "Choice: y" << endl;
                authority +=5;
                support -= 4;
                file << "Authority +5" << endl;
                file << "Support -4" << endl;
                
            } else {
                file << "Choice: n" << endl;
                authority -=4;
                support += 5;
                file << "Authority -5" << endl;
                file << "Support +4" << endl;
                
            }
            break;
        case 3: 
            if (a) {
                file << "Choice: y" << endl;
                personality +=4;
                economy -= 2;
                file << "Personality +4" << endl;
                file << "Economy -2" << endl;
                
            } else {
                file << "Choice: n" << endl;
                personality -= 2;
                economy += 4 ;
                file << "Personality -2" << endl;
                file << "Economy +4" << endl;
                
            }
            break;
        case 4: 
            if (a) {
                file << "Choice: y" << endl;
                personality +=5;
                support -= 4;
                file << "Personality +5" << endl;
                file << "Support -4" << endl;
                
            } else {
                file << "Choice: n" << endl;
                personality -= 4;
                support += 5 ;
                file << "Personality -4" << endl;
                file << "Support +5" << endl;
                
            }
            break;
        case 5: 
            if (a) {
                file << "Choice: y" << endl;
                personality +=6;
                economy -= 4;
                file << "Personality +6" << endl;
                file << "Economy -4" << endl;
                
            } else {
                file << "Choice: n" << endl;
                personality -= 4;
                economy += 6 ;
                file << "Personality -4" << endl;
                file << "Economy +6" << endl;
                
            }
            break;
        case 6: 
            if (a) {
                file << "Choice: y" << endl;
                authority +=5;
                support -= 5;
                file << "Authority +5" << endl;
                file << "Support -5" << endl;
                
            } else {
                file << "Choice: n" << endl;
                authority -= 5;
                support += 5 ;
                file << "Authority -5" << endl;
                file << "Support +5" << endl;
                
            }
            break;
        case 7: 
            if (a) {
                file << "Choice: y" << endl;
                authority +=7;
                economy -= 3;
                file << "Authority +7" << endl;
                file << "Economy -3" << endl;
                
            } else {
                file << "Choice: n" << endl;
                authority -= 3;
                economy += 7 ;
                file << "Authority -3" << endl;
                file << "Economy +7" << endl;
                
            }
            break;
        case 8: 
            if (a) {
                file << "Choice: y" << endl;
                authority +=7;
                economy -= 3;
                file << "Authority +7" << endl;
                file << "Economy -3" << endl;
                
            } else {
                file << "Choice: n" << endl;
                authority -= 3;
                economy += 7 ;
                file << "Authority -3" << endl;
                file << "Economy +7" << endl;
                
            }
            break;
        case 9: 
            if (a) {
                file << "Choice: y" << endl;
                personality +=5;
                economy -= 4;
                file << "Personality +5" << endl;
                file << "Economy -4" << endl;
                
            } else {
                file << "Choice: n" << endl;
                personality -= 4;
                economy += 5 ;
                file << "Personality -4" << endl;
                file << "Economy +5" << endl;
                
            }
            break;
    }
    file.close();
}


