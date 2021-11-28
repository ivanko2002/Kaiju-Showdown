#include <iostream>
#include "struct.h"
using namespace std;

int main()
{
	kchoice();
	cout << "Welcome to Kaiju Showdown\n";
	system("PAUSE");
	int flag = 0;
	do
	{
		system("CLS");
		int input, flag = 0;
		cout << "MENU" << endl;
		cout << "1.Start game" << endl;
		cout << "2.Instructions" << endl;
		cout << "3.Characters info" << endl;
		cin >> input;
		if (input < 1 or input > 3)
		{
			cout << "Input out of range, please try again\n";
		}
	} while (flag == 0);
}
