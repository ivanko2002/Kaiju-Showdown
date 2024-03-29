//Main menu for the game
//Displays the options the player can take

#include <iostream>
#include "struct.h"
using namespace std;
int main()
{
	cout << "Welcome to Kaiju Showdown\n";
	int exit_flag = 0;
	while (exit_flag == 0)
	{

		int input, menu_flag = 0;
		while (menu_flag == 0)
		{
			cout << "MENU" << endl;
			cout << "1.Start game" << endl;
			cout << "2.Instructions" << endl;
			cout << "3.Characters info" << endl;
			cout << "4.Exit" << endl;
			cin >> input;
			menu_flag = 1;
			switch (input)
			{
			case 1:
				startgame_menu();
				break;
			case 2:
				instruction();
				break;
			case 3:
				cout << "Jaegar data:" << endl
					 << endl;
				cout << "1. Gipsy Danger " << endl
					 << endl;
				cout << "Characteristics: Highest health points" << endl
					 << endl;
				cout << "hp = 1500\tap = 50\txp = 100\tdp = 20\tsp = 100" << endl
					 << endl;
				cout << "Skill 1 = Elbow Rocket\nxp = 20\tdamage = 100" << endl
					 << endl;
				cout << "Skill 2 = Palm Grip Backslash\nxp = 40\tdamage = 150" << endl
					 << endl;
				cout << "Skill 3 = Plasma Cannon\nxp = 150\tdamage = 300" << endl
					 << endl;

				cout << "2. Striker Eureka" << endl
					 << endl;
				cout << "Characteristic: Highest experience points" << endl
					 << endl;
				cout << "hp = 1200\tp = 45\txp = 150\tdp = 10\tsp = 150" << endl
					 << endl;
				cout << "Skill 1 = AKM Chest Launcher\nxp = 15\tdamage = 120" << endl
					 << endl;
				cout << "Skill 2 = Sting-Blades\nxp = 45\tdamage = 200" << endl
					 << endl;
				cout << "Skill 3 = Nuclear Payload\nxp = 200\tdamage = 500" << endl
					 << endl;

				cout << "3. Crimson Typhoon" << endl
					 << endl;
				cout << "Characteristic: Highest damage of skills" << endl
					 << endl;
				cout << "hp = 1000\tap = 50\txp = 120\ndp = 30\tsp = 160" << endl
					 << endl;
				cout << "Skill 1 = Jet Kick\nxp = 50\tdamage = 175" << endl
					 << endl;
				cout << "Skill 2 = Sterno Piston\nxp = 70\tdamage = 250" << endl
					 << endl;
				cout << "Skill 3 = Thunder Cloud Formation\nxp = 300\tdamage = 800" << endl
					 << endl;

				cout << "4. Mammoth Apostle" << endl
					 << endl;
				cout << "Characteristic: Highest defense point" << endl
					 << endl;
				cout << "hp = 1150\tap = 40\txp = 135\tdp = 55\tsp = 175" << endl
					 << endl;
				cout << "Skill 1 = Apolo Punch\nxp = 35\tdamage = 125" << endl
					 << endl;
				cout << "Skill 2 = Mammoth Slash\nxp = 55\tdamage = 225" << endl
					 << endl;
				cout << "Skill 3 = MA Salvation\nxp = 285\tdamage = 755" << endl
					 << endl;

				cout << "5. Hydra Hyperion" << endl
					 << endl;
				cout << "Characteristic: Highest speed" << endl
					 << endl;
				cout << "hp = 950\tap = 100\txp = 150\tdp = 25\tsp = 200" << endl
					 << endl;
				cout << "Skill 1 = Hydra Beacham\nxp = 30\tdamage = 150" << endl
					 << endl;
				cout << "Skill 2 = Hyper Jump\nxp = 275\tdamage = 300" << endl
					 << endl;
				cout << "Skill 3 = Shatterdome\nxp = 350\tdamage = 950" << endl
					 << endl;

				cout << "Kaiju data:" << endl
					 << endl;
				cout << "1. Slattern" << endl
					 << endl;
				cout << "Characteristics: Highest health points" << endl;
				cout << "hp = 2500\nap = 75\nxp = 100\ndp = 10\nsp = 50" << endl
					 << endl;
				cout << "Skill 1 = Hammer Jaw\nxp = 15\tdamage = 50" << endl
					 << endl;
				cout << "Skill 2 = Spinejackal\nxp = 35\tdamage = 100" << endl
					 << endl;
				cout << "Skill 3 = Slattern Strike\nxp = 150\tdamage = 250" << endl
					 << endl;

				cout << "2. Otachi" << endl;
				cout << "Characteristic: Highest speed" << endl;
				cout << "hp = 2000\nap = 50\nxp = 150\ndp = 15\nsp = 180" << endl
					 << endl;
				cout << "Skill 1 = Prehensile Tail\nxp = 15\tdamage = 35" << endl
					 << endl;
				cout << "Skill 2 = Acid Sack\nxp = 40\tdamage = 125" << endl
					 << endl;
				cout << "Skill 3 = Otachi Strike\nxp = 180\tdamage = 300" << endl
					 << endl;

				cout << "3. Scunner" << endl;
				cout << "Characteristic: Highest damage of skills" << endl;
				cout << "hp = 1800\nap = 60\nxp = 120\ndp = 20\nsp = 80" << endl
					 << endl;
				cout << "Skill 1 = Clawhook\nxp = 25\tdamage = 50" << endl
					 << endl;
				cout << "Skill 2 = Meathead\nxp = 60\tdamage = 160" << endl
					 << endl;
				cout << "Skill 3 = Scunner Fury\nxp = 200\tdamage = 350" << endl
					 << endl;

				cout << "4. Insurrector" << endl;
				cout << "Characteristic: Highest attack power" << endl;
				cout << "hp = 1200\nap = 120\nxp = 100\ndp = 10\nsp = 95" << endl
					 << endl;
				cout << "Skill 1 = Insurretor Claw\nxp = 30\tdamage = 130" << endl
					 << endl;
				cout << "Skill 2 = Hammerjaw\nxp = 80\tdamage = 180" << endl
					 << endl;
				cout << "Skill 3 = Insurrection\nxp = 250\tdamage = 550" << endl
					 << endl;

				cout << "5. Atticon" << endl;
				cout << "Characteristic: Highest defense point" << endl;
				cout << "hp = 1300\nap = 30\nxp = 175\ndp = 30\nsp = 100" << endl
					 << endl;
				cout << "Skill 1 = Cherno Alpha\nxp = 40\tdamage = 60" << endl
					 << endl;
				cout << "Skill 2 = Belobog\nxp = 75\tdamage = 160" << endl
					 << endl;
				cout << "Skill 3 = Itak\nxp = 225\tdamage = 400" << endl
					 << endl;
				break;
			case 4:
				cout << "Game exited\n";
				exit_flag = 1;
				break;
			default:
				cout << "Incorrect input, please try again\n";
				menu_flag = 0;
				break;
			}
		}
	}
}
