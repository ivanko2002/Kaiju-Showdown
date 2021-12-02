// Function that print jaegar's props
// Take player data as input

#include <iostream>
#include "struct.h"

using namespace std;

void jaegar_bag(Player1 &j, Player2 &k, jprop *&jhead)
{

	jprop *start = jhead;
	jprop *now = start;
	int i = 1;
	cout << "Jaegar's current props: " << endl;
	while (now != NULL)
	{
		cout << i << ". " << now->jprop_name << ": ";
		cout << now->quantity << endl;
		i++;
		now = now->next;
	}
	cout << i << ". Back\n";
	int input = 0;
	while (input == 0)
	{
		cin >> input;
		switch (input)
		{
		case 1:
			if (start->quantity > 0)
			{
				k.sp -= 30;
				cout<<j.name<<" used "<<start->jprop_name<<"!\n";
				cout << k.name << "'s SP was lowered by 30!\n";
				cout << k.name << "'s SP is now " << k.sp << endl;
			}
			else
			{
				cout<<""
			}
		}
	}
}
