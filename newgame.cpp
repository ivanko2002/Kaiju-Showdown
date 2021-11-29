//This function starts the game and controls the gameflow

#include <iostream>
#include "struct.h"

using namespace std;

void newgame()
{
    string pj, pk;
	vector<j> jaegars;
	system("CLS");
	pj = jchoice();
	choose_jaegar(jaegars);
	//for loop to read data
	system("CLS");
	kchoice();
	cout << jaegars.back().hp << endl;
}
