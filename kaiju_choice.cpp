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
		cout << "hp = 2500\tap = 75\txp = 100\tdp = 10\tsp = 50" << endl << endl;
		cout << "skill_1 = Hammer Jaw\nxp = 15\tdamage = 50" << endl << endl;
		cout << "skill_2 = Spinejackal\nxp = 35\tdamage = 100" << endl << endl;
		cout << "skill_3 = Slattern Strike\nxp = 150\tdamage = 250" << endl << endl;
		
		cout << "2. Otachi" << endl << endl;
		cout << "Characteristic: Highest speed" << endl << endl;
		cout << "hp = 2000\nap = 50\txp = 150\tdp = 15\tsp = 180" << endl << endl;
		cout << "skill_1 = Prehensile Tail\nxp = 15\tdamage = 35" << endl << endl;
		cout << "skill_2 = Acid Sack\nxp = 40\tdamage = 125" << endl << endl;
		cout << "skill_3 = Otachi Strike\nxp = 180\tdamage = 300" << endl << endl;
		
		cout << "3. Scunner" << endl << endl;
		cout << "Characteristic: Highest damage of skills" << endl << endl;
		cout << "hp = 1800\tap = 60\txp = 120\tdp = 20\tsp = 80" << endl << endl;
		cout << "skill_1 = Clawhook\nxp = 25\tdamage = 50" << endl << endl;
		cout << "skill_2 = Meathead\nxp = 60\tdamage = 160" << endl << endl;
		cout << "skill_3 = Scunner Fury\nxp = 200\tdamage = 350" << endl << endl;
		
		cout << "4. Insurrector" << endl << endl;
		cout << "Characteristic: Highest attack power" << endl << endl;
		cout << "hp = 1200\tap = 120\txp = 100\tdp = 10\tsp = 95" << endl << endl;
		cout << "skill_1 = Insurretor Claw\nxp = 30\tdamage = 130" << endl << endl;
		cout << "skill_2 = Hammerjaw\nxp = 80\tdamage = 180" << endl << endl;
		cout << "skill_3 = Insurrection\nxp = 250\tdamage = 550" << endl << endl;
		
		cout << "5. Atticon" << endl << endl;
		cout << "Characteristic: Highest defense point" << endl << endl;
		cout << "hp = 1300\tap = 30\txp = 175\tdp = 30\tsp = 100" << endl << endl;
		cout << "skill_1 = Cherno Alpha\nxp = 40\tdamage = 60" << endl << endl;
		cout << "skill_2 = Belobog\nxp = 75\tdamage = 160" << endl << endl;
		cout << "skill_3 = Itak\nxp = 225\tdamage = 400" << endl << endl;
		
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
