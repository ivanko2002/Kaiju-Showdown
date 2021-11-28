// Fuction for player to choosing a kaiju
// Take input from player and return the class which the player chooses. 


#include <iostream>
#include "struct.h"

using namespace std;

string kchoice()
{
    int n;
    while (true)
    {
        cout << "Player 2 choose a kaiju" << endl;
        cout << "1.Slattern" << endl;
	cout << "Characteristics: Highest health points" << endl;
	cout << endl;

        cout << "2. Otachi" << endl;
	cout << "Characteristic: Highest experience points" << endl;
	cout << endl;

        cout << "3. Scunner" << endl;
	cout << "Characteristic: Highest damage of skills" << endl;
	cout << endl;

	cout << "4. Insurrector" << endl;
	cout << "Characteristic: Highest attack power" << endl;
	cout << endl;

	cout << "5. Atticon" << endl;
	cout << "Characteristic: Highest defense point" << endl;
	cout << endl;
	cout << endl;

        cout << "Please input a number between 1 to 5: "; 
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

		case 4:
			return "Insurrector";
			break;

		case 5:
			return "Atticon";
			break;

		default:
			cout << "Invalid input!"<< endl << "Please input a number between 1 - 5" << endl;
			cout << "Your input is ";
	}
    }
}



