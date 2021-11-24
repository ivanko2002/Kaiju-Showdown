// Fuction for player to choosing a Jaegar
// Take input from player and return the class which the player chooses. 


#include <iostream>
#include "struct.h"

using namespace std;

string jchoice()
{
    int n;
    while (true)
    {
        cout << "Choose a Jaegar" << endl;
        cout << "1. Gipsy Danger " << endl;
	cout << "Characyeristics: Highest attack power and health points" << endl;
	cout << endl;

        cout << "2. Striker Eureka" << endl;
	cout << "Characteristic: Highest experience points" << endl;
	cout << endl;

        cout << "3. Crimson Typhoon" << endl;
	cout << "Characteristic: Highest damage of skills" << endl;
	cout << endl;

	cout << endl;

        cout < "Please input a number between 1 to 3: "; 
        cin >> n;

	switch (n){
		case 1:
			return "Gipsy Danger";
			break;
		       
		case 2:
			return "Striker Eureka";
			break;
		
		case 3:
			return "Crimson Typhoon";
			break;
		default:
			cout << "Invalid input!"<< endl << "Please input a number between 1 - 3" << endl;
			cout << "Your input is ";
	}
    }
}



