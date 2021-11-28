#include <iostream>
#include "struct.h"
using namespace std;

int main()
{
	int exit_flag=0;
	while(exit_flag==0){
		cout << "Welcome to Kaiju Showdown\n";
		system("PAUSE");
		int menu_flag = 0;
		system("CLS");
		do
		{
			int input, flag = 0;
			cout << "MENU" << endl;
			cout << "1.Start game" << endl;
			cout << "2.Instructions" << endl;
			cout << "3.Characters info" << endl;
			cout<< "4.Exit"
			cin >> input;
			if (input < 1 or input > 4)
			{
				cout << "Input out of range, please try again\n";
			}
			else
			{
				menu_flag=1;
			}
		} while (menu_flag == 0);
		switch(input){
			case 1:
			case 2:
				printinstructions();
				system("pause");
			case 3:
				printchara();
				system('pause')
			case 4:
				exit_flag=1;
				break
		}
	}
	
}
