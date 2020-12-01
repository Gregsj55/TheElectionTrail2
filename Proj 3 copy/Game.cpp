#include <iostream>
#include "Game.h"
using namespace std;


Game::Game(string playa, string oppo, string playerparty, string oppoparty){
    srand(time(NULL));
    opp = oppo;
    turn = 0;
    oppP = oppoparty;
        
    Player p(playa, playerparty);
    Player o(oppo, oppoparty);

    Player people[2] = {p,o};

    // sets up player and opponent objects for the game.

    // Set up the region objects with their random ideas

    // 0 is authority
    // 1 is personality
    // 2 is economy
    // 3 is support

    // for the south,
    int a = rand() % 2;

    if( a == 0){
        s1.SouthSet(0);
        se1.SouthEastSet(1);
    } else {
        s1.SouthSet(1);
        se1.SouthEastSet(0);
    }

    int b = rand() % 2;
    if( b == 0){
        n1.NorthSet(2);
        w1.WestSet(3);
    } else{
        n1.NorthSet(3);
        w1.WestSet(2);
    }
}

bool Game::playerTurn(){
    int input;
    string inString;
    int choice;
    string uChoice;
    //do player turn things
    cout <<"####################" << endl;
    cout << "Great choice, now choose which region!" << endl;
    cout << "1, North" << endl;
    cout << "2, South" << endl;
    cout << "3, South East" << endl;
    cout << "4, West" << endl;
    cout << "####################" << endl;
    cout << "\n Region choice:" << endl;
    //get input
    getline(cin,inString);
    //do  the things based on input
    //return true if successful, false if not
    if (inString == "1") {// North region was picked
        if (n1.getNumDecisions() < 10) {
            choice = text.northChoice(false);
            getline(cin,uChoice);
            if (uChoice[0] == 'y') {
                n1.questionrunner(true,choice,false);
            } else if (uChoice[0] == 'n') {
                n1.questionrunner(false,choice,false);
            } else {
                while (uChoice != "69") {
                    cout << "Invalid entry, try again" << endl;
                    getline(cin,uChoice);
                    if (uChoice[0] == 'y') {
                        n1.questionrunner(true,choice,false);
                        break;
                    } else if (uChoice[0] == 'n') {
                        n1.questionrunner(false,choice,false);
                        break;
                    }
                }
            }
            return true;
        } else {
            cout << "You have finished all of the decisions in the North, please choose again." << endl;
            return false;
        }
    } else if (inString == "2") {//South region was picked
        if (s1.getNumDecisions() < 10) {
            choice = text.southChoice(false);
            getline(cin,uChoice);
            if (uChoice[0] == 'y') {
                s1.questionrunner(true,choice,false);
            } else if (uChoice[0] == 'n') {
                s1.questionrunner(false,choice,false);
            } else {
                return false;
            }
            return true;
        } else {
            cout << "You have finished all of the decisions in the South, please choose again." << endl;
            return false;
        }
    } else if (inString == "3") {//Southeast region was picked
        if (se1.getNumDecisions() < 10) {
            choice = text.southEastChoice(false);
            getline(cin,uChoice);
            if (uChoice[0] == 'y') {
                se1.questionrunner(true,choice,false);
            } else if (uChoice[0] == 'n') {
                se1.questionrunner(false,choice,false);
            } else {
                return false;
            }
            return true;
        } else {
            cout << "You have finished all of the decisions in the South East, please choose again." << endl;
            return false;
        }
    } else if (inString == "4") {// West region was picked
        if (w1.getNumDecisions() < 10) {
            choice = text.westChoice(false);
            getline(cin,uChoice);
            if (uChoice[0] == 'y') {
                w1.questionrunner(true,choice,false);
            } else if (uChoice[0] == 'n') {
                w1.questionrunner(false,choice,false);
            } else {
                return false;
            }
            return true;
        } else {
            cout << "You have finished all of the decisions in the West, please choose again." << endl;
            return false;
        }
    } else {
        cout << "You did not enter a valid number, please choose again." << endl;
        return false;
    }
}
bool Game::opponentTurn(){
    int input;
    string inString;
    int choice;
    string uChoice;
    srand(time(NULL));
    int random = rand()%4;
    if (random == 0) {
        if (oText.northSize() > 0) {
            cout << opp << " went to the North!" << endl << endl << endl;
            choice = oText.northChoice(true);
            input = rand()%2;
            if (input == 0) {
                uChoice = "y";
            } else{
                uChoice = "n";
            }
            if (uChoice[0] == 'y') {
                n1.questionrunner(true,choice,true);
            } else if (uChoice[0] == 'n') {
                n1.questionrunner(false,choice,true);
            } 
            return true;
        } else {
            //cout << "You have finished all of the decisions in the North, please choose again." << endl;
            return false;
        }
    } else if (random == 1) {
        if (oText.southSize() > 0) {
            cout << opp << " went to the South!" << endl << endl << endl;
            choice = oText.southChoice(true);
            input = rand()%2;
            if (input == 0) {
                uChoice = "y";
            } else{
                uChoice = "n";
            }
            if (uChoice[0] == 'y') {
                s1.questionrunner(true,choice,true);
            } else if (uChoice[0] == 'n') {
                s1.questionrunner(false,choice,true);
            } 
            return true;
        } else {
            //cout << "You have finished all of the decisions in the South, please choose again." << endl;
            return false;
        }
    } else if (random == 2) {
        if (oText.southEastSize() > 0) {
            cout << opp << " went to the South East!" << endl << endl << endl;
            choice = oText.southEastChoice(true);
            input = rand()%2;
            if (input == 0) {
                uChoice = "y";
            } else{
                uChoice = "n";
            }
            if (uChoice[0] == 'y') {
                se1.questionrunner(true,choice,true);
            } else if (uChoice[0] == 'n') {
                se1.questionrunner(false,choice,true);
            } 
            return true;
        } else {
            //cout << "You have finished all of the decisions in the South East, please choose again." << endl;
            return false;
        }
    } else if (random == 3) {
        if (oText.westSize() > 0) {
            cout << opp << " went to the West!" <<endl << endl << endl;
            input = rand()%2;
            if (input == 0) {
                uChoice = "y";
            } else{
                uChoice = "n";
            }
            choice = oText.westChoice(true);
            if (uChoice[0] == 'y') {
                w1.questionrunner(true,choice,true);
            } else if (uChoice[0] == 'n') {
                w1.questionrunner(false,choice,true);
            }
            return true;
        } else {
            //cout << "You have finished all of the decisions in the West, please choose again." << endl;
            return false;
        }
    } else {
        //cout << "You did not enter a valid number, please choose again." << endl;
        return false;
    }
    // make the opponent stuff
    //same as opponent but no choices
}

bool Game::winCondition() {
    ofstream file("file.txt", ios::app);
    //check stats with a search sort algorithm 
    //to determine winner and play text for end of game
    //called after 25 turns
    //can read from file that is being written to
    //has menu function in GameDriver
    int nA,nE,nP,nS,sA,sE,sP,sS,seA,seE,seP,seS,wA,wE,wP,wS;
    // These variables are all for the sorting alg and
    // for figuring out who won.
    nA = n1.getAuthority();
    nE = n1.getEconomy();
    nP = n1.getPersonality();
    nS = n1.getSupport();
    
    sA = s1.getAuthority();
    sE = s1.getEconomy();
    sP = s1.getPersonality();
    sS = s1.getSupport();

    seA = se1.getAuthority();
    seE = se1.getEconomy();
    seP = se1.getPersonality();
    seS = se1.getSupport();

    wA = se1.getAuthority();
    wE = se1.getEconomy();
    wP = se1.getPersonality();
    wS = se1.getSupport();

    int n[] = {nA,nE,nP,nS};
    int s[] = {sA,sE,sP,sS};
    int se[] = {sA,sE,sP,sS};
    int w[] = {sA,sE,sP,sS};
    // these loops sort each region by the top two stats
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 4; j++){
            if(n[i] < n[j]){
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 4; j++){
            if(s[i] < s[j]){
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 4; j++){
            if(se[i] < se[j]){
                int temp = se[i];
                se[i] = se[j];
                se[j] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 4; j++){
            if(w[i] < w[j]){
                int temp = w[i];
                w[i] = w[j];
                w[j] = temp;
            }
        }
    }

    int score = 0;
    // These following blocks make a score on who is ahead and who should win the game
    // For first place stats, +- 10, second place stats +-7
    if(n[0] == nA || n[0] == nE){
        if(n[1] == nA || n[1] == nE){
            score+=7;
        }
        else score-=7;
       
        score+=10;
    }
    else{
        if(!(n[1] == nA || n[1] == nE)){
            score-=7;
        }
        else score+=7;
        score-=10;
    }if(s[0] == sA || s[0] == sE){
        if((s[1] == sA || s[1] == sE))score+=7;
        else score-=7;
        score+=10;
    }else{
        if(!(s[1] == sA || s[1] == sE))score-=7;
        else score+=7;
        score-=10;
    }if(se[0] == seA || n[0] == seE){
        if(se[1] == seA || n[1] == seE)score+=7;
        else score-=7;
        score+=10;
    }else{
        if(!(se[1] == seA || n[1] == seE))score-=7;
        else score+=7;
        score-=10;
    }if(w[0] == wA || n[0] == wE){
        if(w[0] == wA || n[0] == wE)score+=7;
        else score-=7;
        score+=10;
    }else{
        if(!(w[0] == wA || n[0] == wE))score+=7;
        else score+=7;
        score-=10;
    }
    int endconditions;
    if(oppP == "fascist")score = (score - 2*score);
    if(score > 15){
        endconditions = 2;
        // i see this as an absolute win
    }
    else if(score >= 0){
        // partial win
        endconditions = 1;
    }
    else{
        endconditions = 0;
        // you lose
    }


     // "0 to 3 inclusive"
    
    switch(endconditions){
        case 0:{
            // you just straight up lose
            cout << "Your opposition won in a landslide, ain't that a shame, better luck next time" << endl;
            file << "Your opposition won in a landslide, ain't that a shame, better luck next time" << endl;
            return false;
            break;
        }
        case 1:{
            // you almost win, but not quite
            cout << "You were so close, but alas, you were so far\nyour opposition took the liberty of couping you right after election, so you never held office\nBetter luck next time!" << endl;
            file << "You were so close, but alas, you were so far\nyour opposition took the liberty of couping you right after election, so you never held office\nBetter luck next time!" << endl;
            return false;
            break;
        }
        case 2:{
            cout << "Congratulations, you're better than most\nThank you for playing our game\nSurprisingly, you got elected and didn't get couped, that's rare\nCome play again on the election trail" << endl;
            file << "Congratulations, you're better than most\nThank you for playing our game\nSurprisingly, you got elected and didn't get couped, that's rare\nCome play again on the election trail" << endl;
            // you actually win, surprise surprise
            return true;
            break;
        }
        case 3:{
            break;
        }
    }

    file.close();
    return false;
}

void Game::winning() {
    //print the menu
    string inString;
    cout <<"####################" << endl;
    cout << "Great choice, now choose which region!" << endl;
    cout << "1, North" << endl;
    cout << "2, South" << endl;
    cout << "3, South East" << endl;
    cout << "4, West" << endl;
    cout << "####################" << endl;
    cout << "\n Region choice:" << endl;

    //get input
    getline(cin,inString);
    if (inString == "1") {
        cout << "The " << n1.winning() << " party is winning in the North." << endl; 
    } else if (inString == "2") {
        cout << "The " << s1.winning() << " party is winning in the South." << endl; 
    } else if (inString == "3") {
        cout << "The " << se1.winning() << " party is winning in the South East." << endl; 
    } else if (inString == "4") {
        cout << "The " << w1.winning() << " party is winning in the West." << endl; 
    } else {
        //reprint if they entered wrong
        cout << "Invalid input, try again" << endl << endl;
        cout <<"####################" << endl;
        cout << "Great choice, now choose which region!" << endl;
        cout << "1, North" << endl;
        cout << "2, South" << endl;
        cout << "3, South East" << endl;
        cout << "4, West" << endl;
        cout << "####################" << endl;
        cout << "\n Region choice:" << endl;
        getline(cin,inString);
        if (inString == "1") {
            cout << "The " << n1.winning() << " party is winning in the North."; 
        } else if (inString == "2") {
            cout << "The " << s1.winning() << " party is winning in the South."; 
        } else if (inString == "3") {
           cout << "The " << se1.winning() << " party is winning in the South East."; 
        } else if (inString == "4") {
            cout << "The " << w1.winning() << " party is winning in the West."; 
        } else {
            cout << "Invalid input, try again later" << endl << endl;
        }
    }
}
