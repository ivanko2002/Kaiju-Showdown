//Function that output a random battlefield
//A random number 1-3 and players' data will be inputted

#include <iostream>
#include "struct.h"

using namespace std;

void battlefield(int n, Player1 &j, Player2 &k)
{

	if (n == 1)
	{

		cout << "The battlefield is on Earth" << endl;
		cout << "Jaegar's HP + 40, XP + 40" << endl;
		cout << "Kaiju's HP + 20, XP +20" << endl;
		j.hp += 40;
		j.xp += 40;
		k.hp += 20;
		k.xp += 20;
	}

	else if (n == 2)
	{

		cout << "The battlefield is in the ocean" << endl;
		cout << "Kaiju moves much faster than Jaegar in water" << endl;
		cout << "Kaiju's AP + 50" << endl;
		cout << "Jaegar's AP - 40" << endl;
		k.ap += 50;
		j.ap -= 40;
	}

	else
	{
		cout << "The battlefield is space" << endl;
		cout << "Insufficient oxygen for the pilots" << endl;
		cout << "Jaegar's HP - 100" << endl;
		cout << "Kaiju's AP + 40" << endl;
		j.hp -= 100;
		k.ap += 40;
	}
}
