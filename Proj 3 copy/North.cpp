#include "North.h"
#include <iostream>

using namespace std;

//constructors
North::North(){
    authority = 0;
    personality = 0;
    economy = 0;
    support = 0;
    numDecisions = 0;
    topPolicy = 0;

}
void North::NorthSet(int top){
    authority = 40;
    personality = 40;
    economy = 60;
    support = 60;
    numDecisions = 0;
    topPolicy = top;
}
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
string North::winning() { return ""; }; //return whos winning
void North::questionrunner(bool a, int questionNum) {
    ofstream file("file.txt", ios::app);
    switch (questionNum) {
        // This is for every question and all of the options, each one fits the question. 
        // Trust me
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
    numDecisions++;
    file.close();
}
 