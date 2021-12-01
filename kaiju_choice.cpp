// Function for player to choosing a kaiju
// Take number as input and return the corresponding kaiju 

#include <iostream>
#include "struct.h"

using namespace std;

string kchoice(){
	
    int n;
    while (true){
	    
        cout << "Player 2 choose a kaiju" << endl;
        cout << "1. Slattern" << endl;
	cout << "Characteristics: Highest health points" << endl;
	cout << "hp = 2500\nap = 75\nxp = 100\ndp = 10\nsp = 50" << endl << end;

        cout << "2. Otachi" << endl;
	cout << "Characteristic: Highest speed" << endl;
	cout << "hp = 2000\nap = 50\nxp = 150\ndp = 15\nsp = 180" << endl << endl;

        cout << "3. Scunner" << endl;
	cout << "Characteristic: Highest damage of skills" << endl;
	cout << "hp = 1800\nap = 60\nxp = 120\ndp = 20\nsp = 80" << endl << endl;

	cout << "4. Insurrector" << endl;
	cout << "Characteristic: Highest attack power" << endl;
	cout << "hp = 1200\nap = 120\nxp = 100\ndp = 10\nsp = 95" << endl << endl;

	cout << "5. Atticon" << endl;
	cout << "Characteristic: Highest defense point" << endl;
	cout << "hp = 1300\nap = 30\nxp = 175\ndp = 30\nsp = 100" << endl << endl;
	
	cout << endl;

        cout << "Please input a number between 1 to 5: "; 
	    
        cin >> n;

	switch (n){
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
			cout << "Invalid input!"<< endl << "Please input a number between 1 - 5" << endl;
			cout << "Your input is ";
	}
    }
}



