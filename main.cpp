#include <iostream>
#include "struct.h"
using namespace std;
int main()
{
	system("CLS");
	cout << "Welcome to Kaiju Showdown\n";
	system("PAUSE");
	int exit_flag = 0;
	while (exit_flag == 0)
	{

		int input, menu_flag = 0;
		system("CLS");
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
				system("pause");
				break;
			case 2:
				instruction();
				system("pause");
				break;
			case 3:
				cout << "Jaegar data:" << endl;
				cout << "1. Gipsy Danger " << endl;
				cout << "Characteristics: Highest health points" << endl;
				cout << "hp = 1500\nap = 50\nxp = 100\ndp = 20\nsp = 100" << endl
					 << endl;

				cout << "2. Striker Eureka" << endl;
				cout << "Characteristic: Highest experience points" << endl;
				cout << "hp = 1200\nap = 45\nxp = 150\ndp = 10\nsp = 150" << endl
					 << endl;

				cout << "3. Crimson Typhoon" << endl;
				cout << "Characteristic: Highest damage of skills" << endl;
				cout << "hp = 1000\nap = 50\nxp = 120\ndp = 30\nsp = 160" << endl
					 << endl;

				cout << "4. Mammoth Apostle" << endl;
				cout << "Characteristic: Highest defense point" << endl;
				cout << "hp = 1150\nap = 40\nxp = 135\ndp = 55\nsp = 175" << endl
					 << endl;

				cout << "5. Hydra Hyperion" << endl;
				cout << "Characteristic: Highest speed" << endl;
				cout << "hp = 950\nap = 100\nxp = 150\ndp = 25\nsp = 200" << endl
					 << endl;
				cout << "Kaiju data:" << endl;
				cout << "1. Slattern" << endl;
				cout << "Characteristics: Highest health points" << endl;
				cout << "hp = 2500\nap = 75\nxp = 100\ndp = 10\nsp = 50" << endl
					 << endl;

				cout << "2. Otachi" << endl;
				cout << "Characteristic: Highest speed" << endl;
				cout << "hp = 2000\nap = 50\nxp = 150\ndp = 15\nsp = 180" << endl
					 << endl;

				cout << "3. Scunner" << endl;
				cout << "Characteristic: Highest damage of skills" << endl;
				cout << "hp = 1800\nap = 60\nxp = 120\ndp = 20\nsp = 80" << endl
					 << endl;

				cout << "4. Insurrector" << endl;
				cout << "Characteristic: Highest attack power" << endl;
				cout << "hp = 1200\nap = 120\nxp = 100\ndp = 10\nsp = 95" << endl
					 << endl;

				cout << "5. Atticon" << endl;
				cout << "Characteristic: Highest defense point" << endl;
				cout << "hp = 1300\nap = 30\nxp = 175\ndp = 30\nsp = 100" << endl
					 << endl;
				system("pause");
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
