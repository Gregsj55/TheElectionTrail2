#include "Player.h"

    
Player::Player(string n, string p){
    name = n;
    party = p;
    likeability = 0;
}

string Player::getName(){
    return name;
}

string Player::getParty(){
    return party;
}

int Player::getLikeability(){
    return likeability;
}

void Player::liked(){
    likeability++;
}