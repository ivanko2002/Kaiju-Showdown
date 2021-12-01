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
		cout << "hp = 1500\tap = 50\txp = 100\tdp = 20\tsp = 100" << endl << endl;
		cout << "skill_1 = Elbow Rocket\nxp = 20\tdamage = 100" << endl << endl;
		cout << "skill_2 = Palm Grip Backslash\nxp = 40\tdamage = 150" << endl << endl;
		cout << "skill_3 = Plasma Cannon\nxp = 150\tdamage = 300" << endl << endl;
		
		cout << "2. Striker Eureka" << endl << endl;
		cout << "Characteristic: Highest experience points" << endl << endl;
		cout << "hp = 1200\tp = 45\txp = 150\tdp = 10\tsp = 150" << endl << endl;
		cout << "skill_1 = AKM Chest Launcher\nxp = 15\tdamage = 120" << endl << endl;
		cout << "skill_2 = Sting-Blades\nxp = 45\tdamage = 200" << endl << endl;
		cout << "skill_3 = Nuclear Payload\nxp = 200\tdamage = 500" << endl << endl;

		cout << "3. Crimson Typhoon" << endl << endl;
		cout << "Characteristic: Highest damage of skills" << endl << endl;
		cout << "hp = 1000\tap = 50\txp = 120\ndp = 30\tsp = 160" << endl << endl;
		cout << "skill_1 = Jet Kick\nxp = 50\tdamage = 175" << endl << endl;
		cout << "skill_2 = Sterno Piston\nxp = 70\tdamage = 250" << endl << endl;
		cout << "skill_3 = Thunder Cloud Formation\nxp = 300\tdamage = 800" << endl << endl;

		cout << "4. Mammoth Apostle" << endl << endl;
		cout << "Characteristic: Highest defense point" << endl << endl;
		cout << "hp = 1150\tap = 40\txp = 135\tdp = 55\tsp = 175" << endl << endl;
		cout << "skill_1 = Apolo Punch\nxp = 35\tdamage = 125" << endl << endl;
		cout << "skill_2 = Mammoth Slash\nxp = 55\tdamage = 225" << endl << endl;
		cout << "skill_3 = MA Salvation\nxp = 285\tdamage = 755" << endl << endl;

		cout << "5. Hydra Hyperion" << endl << endl;
		cout << "Characteristic: Highest speed" << endl << endl;
		cout << "hp = 950\tap = 100\txp = 150\tdp = 25\tsp = 200" << endl << endl;
		cout << "skill_1 = Hydra Beacham\nxp = 30\tdamage = 150" << endl << endl;
		cout << "skill_2 = Hyper Jump\nxp = 275\tdamage = 300" << endl << endl;
		cout << "skill_3 = Shatterdome\nxp = 350\tdamage = 950" << endl << endl;

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
