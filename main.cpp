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
		do
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
				//instruction();
				system("pause");
				break;
			case 3:
				//printchara();
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
		} while (menu_flag == 0);
	}
}
