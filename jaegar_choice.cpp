// Function for player to choosing a Jaegar
// Take number as input and return the corresponding character

#include <iostream>
#include "struct.h"

using namespace std;

string jchoice()
{
	int n;
	while (true)
	{
		cout << "Player 1 choose a Jaegar" << endl;
		cout << "1. Gipsy Danger " << endl;
		cout << "Characteristics: Highest health points" << endl;
		cout << "hp = 1500\nap = 50\nxp = 100\ndp = 20\nsp = 100" << endl << endl;

		cout << "2. Striker Eureka" << endl;
		cout << "Characteristic: Highest experience points" << endl;
		cout << "hp = 1200\nap = 45\nxp = 150\ndp = 10\nsp = 150" << endl << endl;

		cout << "3. Crimson Typhoon" << endl;
		cout << "Characteristic: Highest damage of skills" << endl;
		cout << "hp = 1000\nap = 50\nxp = 120\ndp = 30\nsp = 160" << endl << endl;

		cout << "4. Mammoth Apostle" << endl;
		cout << "Characteristic: Highest defense point" << endl;
		cout << "hp = 1150\nap = 40\nxp = 135\ndp = 55\nsp = 175" << endl << endl;

		cout << "5. Hydra Hyperion" << endl;
		cout << "Characteristic: Highest speed" << endl;
		cout << "hp = 950\nap = 100\nxp = 150\ndp = 25\nsp = 200" << endl << endl;

		cout << endl;

		cout << "Please input a number between 1 to 5: ";
		
		cin >> n;

		switch (n)
		{
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
			return "Mammoth Apostle";
			break;

		case 5:
			return "Hydra Hyperion";
			break;

		default:
			cout << "Invalid input!" << endl
				 << "Please input a number between 1 - 5" << endl;
			cout << "Your input is ";
		}
	}
}
