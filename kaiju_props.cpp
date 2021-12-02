//Function for player to exchange props by xp
//Function takes player data and player's bag head
//Take number as input and return the corresponding prop

#include <iostream>
#include <string>
#include "struct.h"

using namespace std;

void kprops(Player2 &k, kprop *&khead)
{

	kprop *start = khead;
	kprop *now = start;
	int choice;
	string kprop;
	int buy = 0;
	while (buy == 0)
	{

		cout << "Remaining XP" << k.xp << endl
			 << endl;

		cout << "Powerful organs available:" << endl
			 << endl;

		cout << "1. Blue Acid " << endl;
		cout << "Description: Toxic agent in the blood of Kaiju" << endl;
		cout << "Effect: Kaiju's HP +100" << endl;
		cout << "XP in exchange: 30" << endl
			 << endl;

		cout << "2. Deadly spiked tails" << endl;
		cout << "Description: 3 killing tails extending Kaiju's chest spike " << endl;
		cout << "Effect: Kaiju's AP +150" << endl;
		cout << "XP in exchange: 70" << endl
			 << endl;

		cout << "3. Electronic lobes" << endl;
		cout << "Description: Generate a huge electronic-killing pulse" << endl;
		cout << "Effect: Jaegar's DP lowers by 20 (until it reaches 0)" << endl;
		cout << "XP in exchange: 90" << endl
			 << endl;

		cout << "4. Exit" << endl
			 << endl;

		cout << "Your choice is: ";
		cin >> choice;

		switch (choice)
		{

		case 1:
			if (k.xp < 30)
			{
				cout << "Insufficient XP!" << endl;
				continue;
			}
			kprop = "Blue Acid";
			k.xp -= 30;
			buy = 1;
			break;

		case 2:
			if (k.xp < 50)
			{
				cout << "Insufficient XP!" << endl;
				continue;
			}
			kprop = "Deadly spiked tails";
			k.xp -= 70;
			buy = 1;
			break;

		case 3:
			if (k.xp < 70)
			{
				cout << "Insufficient XP!" << endl;
				continue;
			}
			kprop = "Electronic lobes";
			k.xp -= 90;
			buy = 1;
			break;
		case 4:
			return;
			break;

		default:
			cout << "Invalid input!" << endl
				 << "Please input a number between 1 - 4" << endl;
			cout << "Your input is ";
		}
		while (true)
		{
			if (kprop == now->kprop_name)
			{
				now->quantity += 1;
				break;
			}
			else
				now = now->next;
		}

		now = start;
	}
}
