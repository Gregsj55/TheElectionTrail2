#include "TextRunner.h"
#include "North.h"
#include "West.h"
#include "South.h"
#include "SouthEast.h"
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <stdlib.h> // for rand
#include <time.h> // to actually get random numbers 
using namespace std;

TextRunner::TextRunner() {
    //initialize vectors
    for (int i = 0; i < 10; i++) {
        westVect.push_back(i);
        northVect.push_back(i);
        southVect.push_back(i);
        southEastVect.push_back(i);
    }
    //set random time seed every time
    srand(time(NULL));

    numTurns = 0;
}

int TextRunner::getNumTurns() {
    return numTurns;
}
void TextRunner::setNumTurns(int numTurnsIn) {
    numTurns = numTurnsIn;
}
int TextRunner::westSize() {return westVect.size();}
int TextRunner::northSize() {return northVect.size();}
int TextRunner::southEastSize() {return southEastVect.size();}
int TextRunner::southSize() {return southVect.size();}
int TextRunner::westChoice(bool opp) {
    //open file
    ofstream file("file.txt", ios::app);

    //get random number within range of vector size
    int random;
    int randomNum = rand()%westVect.size();

    //get vector element at that random number
    random = westVect.at(randomNum);
    if (random == 0) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "Your opponent wants you to have a push up competition to determine dominance before the debate." << endl;
        cout << "Say y to accept his challenge" << endl;
        cout << "Say n to deny his challenge" << endl;
        cout << "Rememeber that you are a weak politician that is likely to lose" << endl;
        }
        //write to file
        file << "Golly Jee Welcome to the West!" << endl;
        file << "Your opponent wants you to have a push up competition to determine dominance before the debate." << endl;
        file << "Say y to accept his challenge" << endl;
        file << "Say n to deny his challenge" << endl;
        file << "Rememeber that you are a weak politician that is likely to lose" << endl;
        
    } else if (random == 1) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "You are aproached by a reporter and asked for your opinion on weather cats are better than dogs" << endl;
        cout << "Say y for cats being better" << endl;
        cout << "Say n for dogs being better" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "You are aproached by a reporter and asked for your opinion on weather cats are better than dogs" << endl;
        file << "Say y for cats being better" << endl;
        file << "Say n for dogs being better" << endl;
    } else if (random == 2) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "An old woman is lying facedown on the street, and a car is about to hit her" << endl;
        cout << "Say y to try and save her" << endl;
        cout << "Say n keep walking and put your sunglasses on to look just a little bit cooler" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "An old woman is lying facedown on the street, and a car is about to hit her" << endl;
        file << "Say y to try and save her" << endl;
        file << "Say n keep walking and put your sunglasses on to look just a little bit cooler" << endl;
    } else if (random == 3) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "Policy question: Should people be allowed to procreate freely." << endl;
        cout << "Say y to seize the means of reproduction" << endl;
        cout << "Say n to leave the power in their hands" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "Policy question: Should people be allowed to procreate freely." << endl;
        file << "Say y to seize the means of reproduction" << endl;
        file << "Say n to leave the power in their hands" << endl;
    } else if (random == 4) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "A weird owl comes up to you and asks how many licks it takes to get to the center of a Tootsie Pop." << endl;
        cout << "Say y to experimentally determine the answer while housing the owl" << endl;
        cout << "Say n to shoot the owl and eat it for dinner" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "A weird owl comes up to you and asks how many licks it takes to get to the center of a Tootsie Pop." << endl;
        file << "Say y to experimentally determine the answer while housing the owl" << endl;
        file << "Say n to shoot the owl and eat it for dinner" << endl;
    } else if (random == 5) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "A CEO of a fortune 500 company saunters by." << endl;
        cout << "Say y to kidnap them in order to seize their company once you win" << endl;
        cout << "Say n to thank them for their service" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "A CEO of a fortune 500 company saunters by." << endl;
        file << "Say y to kidnap them in order to seize their company once you win" << endl;
        file << "Say n to thank them for their service" << endl;
    } else if (random == 6) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "A shady lady and her pet husband walk up to you and offfer their services if you promise to support their ... special rights." << endl;
        cout << "Say y to accept" << endl;
        cout << "Say n to decline" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "A shady lady and her pet husband walk up to you and offfer their services if you promise to support their ... special rights." << endl;
        file << "Say y to accept" << endl;
        file << "Say n to decline" << endl;
    } else if (random == 7) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "You are struck with a case of scurvy because of your meat only diet." << endl;
        cout << "Say y to start reintroducing some foods to keep you alive" << endl;
        cout << "Say n to tough it out" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "You are struck with a case of scurvy because of your meat only diet." << endl;
        file << "Say y to start reintroducing some foods to keep you alive" << endl;
        file << "Say n to tough it out" << endl;
    } else if (random == 8) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "Your oppenent just canceled you on twitter." << endl;
        cout << "Say y to stay strong and stick to your policies" << endl;
        cout << "Say n to send the assassins" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "Your oppenent just canceled you on twitter." << endl;
        file << "Say y to stay strong and stick to your policies" << endl;
        file << "Say n to send the assassins" << endl;
    } else if (random == 9) {
        if (!opp) {
        cout << "Golly Jee Welcome to the West!" << endl;
        cout << "The music industry is against you, and many songs are outright slandering you." << endl;
        cout << "Say y to try and change their veiws and help the industry" << endl;
        cout << "Say n to promise vengence once you are elected" << endl;
        }
        file << "Golly Jee Welcome to the West!" << endl;
        file << "The music industry is against you, and many songs are outright slandering you." << endl;
        file << "Say y to try and change their veiws and help the industry" << endl;
        file << "Say n to promise vengence once you are elected" << endl;
    }
    //incriment turns
    numTurns++;

    //remove from vector
    westVect.erase(westVect.begin()+randomNum);

    //colde file and return
    file.close();
    return random;
}
int TextRunner::southChoice(bool opp) {
    int random;
    ofstream file("file.txt", ios::app);
    int randomNum = rand()%southVect.size();
    random = southVect.at(randomNum);
    if(random == 0){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "You are out gettin' some BBQ, and they bring you pulled pork" << endl;
        file << "You are out gettin' some BBQ, and they bring you pulled pork" << endl;
        if(!opp)cout << "Say y to make the restaurant disappear" << endl;
        file << "Say y to make the restaurant disappear" << endl;
        if(!opp)cout << "Say n to accept the mediocre meat" << endl;
        file << "Say n to accept the mediocre meat" << endl;
    }if(random == 1){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "You are invited to watch football" << endl;
        file << "You are invited to watch football" << endl;
        if(!opp)cout << "Say y because heck yeah football" << endl;
        file << "Say y because heck yeah football" << endl;
        if(!opp)cout << "Say n because how do football" << endl;
        file << "Say n because how do football" << endl;
        
        
    }if(random == 2){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "Local government wants to house your rally" << endl;
        file << "Local government wants to house your rally"<< endl;
        if(!opp)cout << "Say y because you'd love local support" << endl;
        file << "Say y because you'd love local support" << endl;
        if(!opp)cout << "Say n because you don't want their handouts" << endl;
        file << "Say n because you don't want their handouts" << endl;
        
    }if(random == 3){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "What shape is the Earth" << endl;
        file << "What shape is the Earth" << endl;
        if(!opp)cout << "Say y for spicy circle" << endl;
        file << "Say y for spicy circle" << endl;
        if(!opp)cout << "Say n to not say your stance in fear of your supporters" << endl;
        file << "Say n to not say your stance in fear of your supporters" << endl;
        
    }if(random == 4){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "There are hot singles in your area" << endl;
        if(!opp)cout << "Say y to support their college career" << endl;
        if(!opp)cout << "Say n because hot is a measure of temperature" << endl;
        file << "There are hot singles in your area" << endl;
        file << "Say y to support their college career" << endl;
        file << "Say n because hot is a measure of temperature" << endl;
        
    }if(random == 5){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "You find out your campaign manager has foreign ties" << endl;
        file << "You find out your campaign manager has foreign ties" << endl;
        if(!opp)cout << "Say y to firing him on the spot, taking the blame for it" << endl;
        file << "Say y to firing him on the spot, taking the blame for it" << endl;
        if(!opp)cout << "Say n to blackmailing him into working for free in fear of his life" << endl;
        file << "Say n to blackmailing him into working for free in fear of his life" << endl;
        
    }if(random == 6){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "Is cereal a soup?" << endl;
        file << "Is cereal a soup?" << endl;
        if(!opp)cout << "Say y for yes" << endl;
        file << "Say y for yes" << endl;
        if(!opp)cout << "Say n for no" << endl;
        file << "Say n for no" << endl;
        
    }if(random == 7){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "Your brother calls you and says he needs bail money" << endl;
        file << "Your brother calls you and says he needs bail money" << endl;
        if(!opp)cout << "Say y to break him out of jail instead of paying" << endl;
        file << "Say y to break him out of jail instead of paying" << endl;
        if(!opp)cout << "Say n because you don't have a brother..." << endl;
        file << "Say n because you don't have a brother..." << endl;        
    }if(random == 8){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "Your supporters want to know if you like memes" << endl;
        if(!opp)cout << "Say y to pog" << endl;
        if(!opp)cout << "Say n to rage comic" << endl;
        file << "Your supporters want to know if you like memes" << endl;
        file << "Say y to pog" << endl;
        file << "Say n to rage comic" << endl;
        
    }if(random == 9){
        if(!opp)cout << "Howdy, Welcome to the South" << endl;
        file << "Howdy, Welcome to the South" << endl;
        if(!opp)cout << "Your supporters want to know if you like Hamilton" << endl;
        if(!opp)cout << "Say y to express your love for the muiscal" << endl;
        if(!opp)cout << "Say n because musicals are yucky" << endl;
        file << "Your supporters want to know if you like Hamilton" << endl;
        file << "Say y to express your love for the muiscal" << endl;
        file << "Say n because musicals are yucky" << endl;
        
    }
    //give choice
    //bunch of if else
    //write to file
    numTurns++;
    southVect.erase(southVect.begin()+randomNum);
    file.close();
    return random;
}
int TextRunner::northChoice(bool opp) {
    int random;
    ofstream file("file.txt", ios::app);
    
    int randomNum = rand()%northVect.size();
    random = northVect.at(randomNum);
    if(random == 0){
        if (!opp) {
        cout << "Sup, Welcome to the North!" << endl;
        cout << "Your opponent attacked your policies online on reddit" << endl;
        cout << "Say y to gaslight their attack" << endl;
        cout << "Say n to hold a press conference about your policies" << endl;
        }
        file << "Sup, Welcome to the North!" << endl;
        file << "Your opponent attacked your policies online on reddit" << endl;
        file << "Say y to gaslight their attack" << endl;
        file << "Say n to hold a press conference about your policies" << endl;
    }if(random == 1){
        if (!opp) {
        cout << "Hello Hello Hello, Welcome to the North!" << endl;
        cout << "You have been invited to Chuck Norris's house to roundhouse pictures of your opposition" << endl;
        cout << "Say y to go" << endl;
        cout << "Say n to not go" << endl;
        }
        file << "Hello Hello Hello, Welcome to the North!" << endl;
        file << "You have been invited to Chuck Norris's house to roundhouse pictures of your opposition" << endl;
        file << "Say y to go" << endl;
        file << "Say n to not go" << endl;
    }if(random == 2){
        if (!opp) {
        cout << "What's poppin, Welcome to the North" << endl;
        cout << "You get a call from a swiss banker, talking to you about your campaign funds" << endl;
        cout << "Say y to keep your finances off the books" << endl;
        cout << "Say n to be a good, honest, politician" << endl;
        }    
        file << "What's poppin, Welcome to the North" << endl;
        file << "You get a call from a swiss banker, talking to you about your campaign funds" << endl;
        file << "Say y to keep your finances off the books" << endl;
        file << "Say n to be a good, honest, politician" << endl;       
    }if(random == 3){
        if (!opp) {
        cout << "What's cookin good lookin, Welcome to the North" << endl;
        cout << "A man offers you weed" << endl;
        cout << "Say y to do some weeds" << endl;
        cout << "Say n to not do weeds" << endl;
        }
        file << "What's cookin good lookin, Welcome to the North" << endl;
        file << "A man offers you weed" << endl;
        file << "Say y to do some weeds" << endl;
        file << "Say n to not do weeds" << endl;
    }if(random == 4){
        if (!opp) {
        cout << "Hey lil mama, Welcome to the North" << endl;
        cout << "Your SO wants to cuddle because you've been so good" << endl;
        cout << "Say y to be the big spoon" << endl;
        cout << "Say n to be the little spoon" << endl;
        }
        file << "Hey lil mama, Welcome to the North" << endl;
        file << "Your SO wants to cuddle because you've been so good" << endl;
        file << "Say y to be the big spoon" << endl;
        file << "Say n to be the little spoon" << endl;         
    }if(random == 5){
        if (!opp) {
        cout << "Hey babe, Welcome to the North" << endl;
        cout << "A street musician plays All Star by Smash Mouth as you walk past" << endl;
        cout << "Say y to take his instrument for your campaign" << endl;
        cout << "Say n to give the man approx. half the cash in your wallet" << endl;
        }
        file << "Hey babe, Welcome to the North" << endl;
        file << "A street musician plays All Star by Smash Mouth as you walk past" << endl;
        file << "Say y to take his instrument for your campaign" << endl;
        file << "Say n to give the man approx. half the cash in your wallet" << endl;
    }if(random == 6){
        if (!opp) {
        cout << "Well aren't you cute, Welcome to the North" << endl;
        cout << "You are getting brunch, and the waiter offers you some juice" << endl;
        cout << "Say y because you love juice and all that it's done for society" << endl;
        cout << "Say n because you hate juice" << endl;
        }
        file << "Well aren't you cute, Welcome to the North" << endl;
        file << "You are getting brunch, and the waiter offers you some juice" << endl;
        file << "Say y because you love juice and all that it's done for society" << endl;
        file << "Say n because you hate juice" << endl;
    }if(random == 7){
        if (!opp) {
        cout << "Yo, Welcome to the North" << endl;
        cout << "You are in times square, and you need to cross the street" << endl;
        cout << "Say y to jaywalk" << endl;
        cout << "Say n to cross on the crosswalk" << endl;
        }
        file << "Yo, Welcome to the North" << endl;
        file << "You are in times square, and you need to cross the street" << endl;
        file << "Say y to jaywalk" << endl;
        file << "Say n to cross on the crosswalk" << endl;        
    }if(random == 8){
        if (!opp) {
        cout << "Hey bud, Welcome back to the North" << endl;
        cout << "Pizza or Burger" << endl;
        cout << "Say y to Pizza" << endl;
        cout << "Say n to Burger" << endl;
        }
        file << "Hey bud, Welcome back to the North" << endl;
        file << "Pizza or Burger" << endl;
        file << "Say y to Pizza" << endl;
        file << "Say n to Burger" << endl;
    }if(random == 9){
        if (!opp) {
        cout << "Hey kid, You're in the North Now" << endl;
        cout << "A twelve year old on Call of Duty called you Gay" << endl;
        cout << "Say y to dox him and his whole family" << endl;
        cout << "Say n to say what you did to his mom last night" << endl;
        }
        file << "Hey kid, You're in the North Now" << endl;
        file << "A twelve year old on Call of Duty called you Gay" << endl;
        file << "Say y to dox him and his whole family" << endl;
        file << "Say n to say what you did to his mom last night" << endl;          
    }
    //give choice
    //bunch of if else
    //write to file
    numTurns++;
    northVect.erase(northVect.begin()+randomNum);
    file.close();
    return random;
}
int TextRunner::southEastChoice(bool opp) {
    int random;
    ofstream file("file.txt", ios::app);
    int randomNum = rand()%southEastVect.size();
    random = southEastVect.at(randomNum);
    if (random == 0) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "The iced tea you were served was outright bad." << endl;
        cout << "Say y to wipe the resteraunt off the face of the Earth" << endl;
        cout << "Say n to teach the owners how to make it better" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "The iced tea you were served was outright bad." << endl;
        file << "Say y to wipe the resteraunt off the face of the Earth" << endl;
        file << "Say n to teach the owners how to make it better" << endl;
    } else if (random == 1) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "Your grandma is sick." << endl;
        cout << "Say y to go foster her back to health while livestreamig it on twitch" << endl;
        cout << "Say n to let her die" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "Your grandma is sick." << endl;
        file << "Say y to go foster her back to health while livestreamig it on twitch" << endl;
        file << "Say n to let her die" << endl;
    } else if (random == 2) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "A church in the town you are in is in trouble and needs your financial help." << endl;
        cout << "Say y to become an honorary member and use campaign funds to help" << endl;
        cout << "Say n to deny them aid" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "A church in the town you are in is in trouble and needs your financial help." << endl;
        file << "Say y to become an honorary member and use campaign funds to help" << endl;
        file << "Say n to deny them aid" << endl;
    } else if (random == 3) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "The police did a bad thing." << endl;
        cout << "Say y to support them and their actions no matter what" << endl;
        cout << "Say n to pretend it never happened" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "The police did a bad thing." << endl;
        file << "Say y to support them and their actions no matter what" << endl;
        file << "Say n to pretend it never happened" << endl;
    } else if (random == 4) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "The crop was weak this year and next year is predicted to be the driest in centuries." << endl;
        cout << "Say y to promise to redistribute resources to help those in danger of loing their farms" << endl;
        cout << "Say n to tell them to get better at farming" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "The crop was weak this year and next year is predicted to be the driest in centuries." << endl;
        file << "Say y to promise to redistribute resources to help those in danger of loing their farms" << endl;
        file << "Say n to tell them to get better at farming" << endl;
    } else if (random == 5) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "The port towns are getting rowdy with gangs and rebels fighting the government." << endl;
        cout << "Say y to promise to \"Take care of it\"." << endl;
        cout << "Say n to convienently forget the question was asked" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "The port towns are getting rowdy with gangs and rebels fighting the government." << endl;
        file << "Say y to promise to \"Take care of it\"." << endl;
        file << "Say n to convienently forget the question was asked" << endl;
    } else if (random == 6) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "The spicy sauce was too spicy." << endl;
        cout << "Say y to cry a little but finish the meal" << endl;
        cout << "Say n to convienently have something come up" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "The spicy sauce was too spicy." << endl;
        file << "Say y to cry a little but finish the meal" << endl;
        file << "Say n to convienently have something come up" << endl;
    } else if (random == 7) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "Scientists say that your campaign policies make no sense and are not possible." << endl;
        cout << "Say y to make a scientist justify them" << endl;
        cout << "Say n to deny that science exists" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "Scientists say that your campaign policies make no sense and are not possible." << endl;
        file << "Say y to make a scientist justify them" << endl;
        file << "Say n to deny that science exists" << endl;
    } else if (random == 8) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "You spent too much time on other regions and the South East is lonely." << endl;
        cout << "Say y to take the South East out on a nice date and spend time with her" << endl;
        cout << "Say n to leave again because you just cant deal with her right now" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "You spent too much time on other regions and the South East is lonely." << endl;
        file << "Say y to take the South East out on a nice date and spend time with her" << endl;
        file << "Say n to leave again because you just cant deal with her right now" << endl;
    } else if (random == 9) {
        if (!opp) {
        cout << "Hey Sugar, welcome to the South East!" << endl;
        cout << "A group of people figured out your corruption sceme." << endl;
        cout << "Say y to eliminate them and everyone that knows them" << endl;
        cout << "Say n to try to bribe them" << endl;
        }
        file << "Hey Sugar, welcome to the South East!" << endl;
        file << "A group of people figured out your corruption sceme." << endl;
        file << "Say y to eliminate them and everyone that knows them" << endl;
        file << "Say n to try to bribe them" << endl;
    }
    numTurns++;
    southEastVect.erase(southEastVect.begin()+randomNum);
    file.close();
    return random;
}
