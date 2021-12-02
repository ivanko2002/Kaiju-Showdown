// Function that print kaiju's props
// Take player data as input

#include <iostream>
#include "struct.h"

using namespace std;
int kaiju_bag(Player1 &j, Player2 &k, kprop *&khead)
{
	kprop *start = khead;
	kprop *now = start;
	int n = 1;
	cout << "Kaiju's current props: " << endl;
	while (now != NULL)
	{
		cout << n << ". " << now->kprop_name << ": ";
		cout << now->quantity << endl;
		n++;
		now = now->next;
	}
	cout << n << ". Back\n";
	int input = 0;
	while (input == 0)
	{
		cin >> input;
		switch (input)
		{
		case 1:
			if (start->quantity > 0)
			{
				k.hp += 100;
				cout << k.name << " used " << start->kprop_name << "!\n";
				cout << k.name << "'s HP was increased by 100!\n";
				cout << k.name << "'s HP is now " << k.hp << endl;
			}
			else
			{
				cout << "None in inventory!\n";
				input = 0;
			}
			break;
		case 2:
			if (start->next->quantity > 0)
			{
				k.ap += 150;
				cout << k.name << " used " << start->next->kprop_name << "!\n";
				cout << k.name << "'s AP was increased by 50!\n";
				cout << k.name << "'s AP is now " << k.ap << endl;
			}
			else
			{
				cout << "None in inventory!\n";
				input = 0;
			}
			break;
		case 3:
			if (start->next->next->quantity > 0)
			{
				if (j.dp > 20)
				{
					j.dp -= 20;
				}
				else
				{
					j.dp = 0;
				}
				cout << k.name << " used " << start->next->next->kprop_name << "!\n";
				cout << j.name << "'s DP was decreased by 20!\n";
				cout << j.name << "'s DP is now " << j.dp << endl;
			}
			else
			{
				cout << "None in inventory!\n";
				input = 0;
			}
			break;
		case 4:
			return 0;
			break;
		}
	}
	if (input != 4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}