//Function that prints the game instruction

#include <iostream>
#include "struct.h"

using namespace std;

void print_instruct(){
  
    cout << "Welcome to Kaiju-Showdown !" << endl << endl;
    
    cout << "One player will be Jaegar and another will be Kaiju" << endl << endl;
  
    cout << "In general, Jaegar will have higher damage while Kaiju will have higher health point" << endl << endl;
    
    cout << "Please input an integer from 1 to 5 to choose your character before battle" << endl << endl;
    
    cout << "A battlefield will be randomly generated" << endl << endl; 
  
    cout << "The character who has the highest speed will attack first every round" << endl << endl;
    
    cout << "Please input an integer from 1 to 3 to indicate the skill you are going to use" << endl << endl;
    
    cout << "At the end of each round, you can exchange props with your experience point" << endl << endl;
    
    cout << "The player cannot use the skill if the remaining xp is lower than that of the required xp of the skill" << endl << endl;
    
    cout << "The game ends when one character's health point becomes zero" << endl << endl;
    
    cout << "Enjoy the showdown :)" << endl << endl;
  
}
