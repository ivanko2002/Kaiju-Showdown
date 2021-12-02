// Function for player to choosing a kaiju
// Take number as input and return the corresponding kaiju

#include <iostream>
#include "struct.h"

using namespace std;

string kchoice()
{

	int n;
	while (true)
	{

		cout << "Player 2 choose a kaiju" << endl << endl;
		cout << "1. Slattern" << endl << endl;
		cout << "Characteristics: Highest health points" << endl;
		
		cout << "2. Otachi" << endl << endl;
		cout << "Characteristic: Highest speed" << endl << endl;
	
		cout << "3. Scunner" << endl << endl;
		cout << "Characteristic: Highest damage of skills" << endl << endl;
	
		cout << "4. Insurrector" << endl << endl;
		cout << "Characteristic: Highest attack power" << endl << endl;
	
		cout << "5. Atticon" << endl << endl;
		cout << "Characteristic: Highest defense point" << endl << endl;
		
		cout << endl;

		cout << "Please input a number between 1 to 5: ";

		cin >> n;

		switch (n)
		{
		case 1:
			return "Slattern";
			break;

		case 2:
			return "Otachi";
			break;

		case 3:
			return "Scunner";
			break;

		case 4:
			return "Insurrector";
			break;

		case 5:
			return "Atticon";
			break;

		default:
			cout << "Invalid input!" << endl
				 << "Please input a number between 1 - 5" << endl;
			cout << "Your input is ";
		}
	}
}
