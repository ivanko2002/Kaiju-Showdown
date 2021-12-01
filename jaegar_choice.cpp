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
		cout << "Player 1 choose a Jaegar" << endl << endl;
		cout << "1. Gipsy Danger " << endl << endl;
		cout << "Characteristics: Highest health points" << endl << endl;
		cout << "hp = 1500\nap = 50\nxp = 100\ndp = 20\nsp = 100" << endl << endl;
		cout << "skill_1 = Elbow Rocket\txp = 20\tdamage = 100" << endl << endl;
		cout << "skill_2 = Palm Grip Backslash\txp = 40\tdamage = 150" << endl << endl;
		cout << "skill_3 = Plasma Cannon\txp = 150\tdamage = 300" << endl << endl;
		
		cout << "2. Striker Eureka" << endl << endl;
		cout << "Characteristic: Highest experience points" << << endl << endl;
		cout << "hp = 1200\nap = 45\nxp = 150\ndp = 10\nsp = 150" << endl << endl;
		cout << "skill_1 = AKM Chest Launcher\txp = 15\tdamage = 120" << endl << endl;
		cout << "skill_2 = Sting-Blades\txp = 45\tdamage = 200" << endl << endl;
		cout << "skill_3 = Nuclear Payload\txp = 200\tdamage = 500" << endl << endl;

		cout << "3. Crimson Typhoon" << endl << endl;
		cout << "Characteristic: Highest damage of skills" << endl << endl;
		cout << "hp = 1000\nap = 50\nxp = 120\ndp = 30\nsp = 160" << endl << endl;
		cout << "skill_1 = Jet Kick\txp = 50\tdamage = 175" << endl << endl;
		cout << "skill_2 = Sterno Piston\txp = 70\tdamage = 250" << endl << endl;
		cout << "skill_3 = Thunder Cloud Formation\txp = 300\tdamage = 800" << endl << endl;

		cout << "4. Mammoth Apostle" << endl << endl;
		cout << "Characteristic: Highest defense point" << endl << endl;
		cout << "hp = 1150\nap = 40\nxp = 135\ndp = 55\nsp = 175" << endl << endl;
		cout << "skill_1 = Apolo Punch\txp = 35\tdamage = 125" << endl << endl;
		cout << "skill_2 = Mammoth Slash\txp = 55\tdamage = 225" << endl << endl;
		cout << "skill_3 = MA Salvation\txp = 285\tdamage = 755" << endl << endl;

		cout << "5. Hydra Hyperion" << endl << endl;
		cout << "Characteristic: Highest speed" << endl << endl;
		cout << "hp = 950\nap = 100\nxp = 150\ndp = 25\nsp = 200" << endl << endl;
		cout << "skill_1 = Hydra Beacham\txp = 30\tdamage = 150" << endl << endl;
		cout << "skill_2 = Hyper Jump\txp = 275\tdamage = 300" << endl << endl;
		cout << "skill_3 = Shatterdome\txp = 350\tdamage = 950" << endl << endl;

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
