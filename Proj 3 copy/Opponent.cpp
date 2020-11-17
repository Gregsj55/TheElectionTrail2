#include "Opponent.h"

Opponent::Opponent(string n, string p){
    name = n;
    party = p;
    likeability = 0;
}
string Opponent::getName(){
    return name;
}
string Opponent::getParty(){
    return party;
}
int Opponent::getLikeability(){
    return likeability;
}
void Opponent::liked(){
    likeability++;
}