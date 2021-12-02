// Function for loading last game
// Take string input from user
// Retrieve data from txt file and save those data into variables to be used in the game

#include <iostream>
#include <string>
#include "struct.h"

using namespace std;

void load_game(Player1 &j, Player2 &k)
{
	string data;
	ifstream fin;
	fin.open(savefile.txt);

	if (fin.fail()){
		cout << "No record." << endl;
		return;
	}

	else{
		fin >> j.name;
		fin >> j.hp;
		fin >> j.ap;
		fin >> j.xp;
		fin >> j.dp;
		fin >> j.sp;
		fin >> j.skill_1;
		fin >> j.xp1;
		fin >> j.damage1;
		fin >> j.skill_2;
		fin >> j.xp2;
		fin >> j.damage2;
		fin >> j.skill_3;
		fin >> j.xp3;
		fin >> j.damage3;
		fin >> k.name;
		fin >> k.hp;
		fin >> k.ap;
		fin >> k.xp;
		fin >> k.dp;
		fin >> k.sp;
		fin >> k.skill_1;
		fin >> k.xp1;
		fin >> k.damage1;
		fin >> k.skill_2;
		fin >> k.xp2;
		fin >> k.damage2;
		fin >> k.skill_3;
		fin >> k.xp3;
		fin >> k.damage3;
	}
									
	fin.close();
	
}
