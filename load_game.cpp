// Function for loading last game
// Take string input from user
// Retrieve data from txt file and save those data into variables to be used in the game

#include <iostream>
#include <string>
#include <fstream>
#include "struct.h"

using namespace std;

void load_game()
{
	Player1 j;
	Player2 k;
	string data;
	ifstream fin;

	fin.open("savefile.txt");

	if (fin.fail())
	{
		cout << "No record." << endl;
		system("pause");
		return;
	}

	else
	{
		getline(fin, j.name);
		getline(fin, j.skill_1);
		getline(fin, j.skill_2);
		getline(fin, j.skill_3);
		getline(fin, k.name);
		getline(fin, k.skill_1);
		getline(fin, k.skill_2);
		getline(fin, k.skill_3);
		fin >> j.hp;
		fin >> j.ap;
		fin >> j.xp;
		fin >> j.dp;
		fin >> j.sp;
		fin >> j.xp1;
		fin >> j.damage1;
		fin >> j.xp2;
		fin >> j.damage2;
		fin >> j.xp3;
		fin >> j.damage3;
		fin >> k.hp;
		fin >> k.ap;
		fin >> k.xp;
		fin >> k.dp;
		fin >> k.sp;
		fin >> k.xp1;
		fin >> k.damage1;
		fin >> k.xp2;
		fin >> k.damage2;
		fin >> k.xp3;
		fin >> k.damage3;
	}
	fin.close();
	remove("savefile.txt");
	jprop *jhead = NULL;
	jhead = j.bag;
	for (int i = 0; i < 3; i++)
	{
		switch (i)
		{
		case 0:
			j.bag->jprop_name = "I-19 Plasmacaster";
			j.bag->quantity = 0;
			j.bag->next = new jprop;
			j.bag = j.bag->next;
			break;
		case 1:
			j.bag->jprop_name = "Plasma Chainsaw";
			j.bag->quantity = 0;
			j.bag->next = new jprop;
			j.bag = j.bag->next;
			break;
		case 2:
			j.bag->jprop_name = "WMB2x90 Missle Launcher";
			j.bag->quantity = 0;
			j.bag->next = NULL;
			break;
		}
	}
	kprop *khead = NULL;
	khead = k.bag;
	for (int i = 0; i < 3; i++)
	{
		switch (i)
		{
		case 0:
			k.bag->kprop_name = "Blue Acid";
			k.bag->quantity = 0;
			k.bag->next = new kprop;
			k.bag = k.bag->next;
			break;
		case 1:
			k.bag->kprop_name = "Deadly spiked tails";
			k.bag->quantity = 0;
			k.bag->next = new kprop;
			k.bag = k.bag->next;
			break;
		case 2:
			k.bag->kprop_name = "Electronic lobes";
			k.bag->quantity = 0;
			k.bag->next = NULL;
			break;
		}
	}
	jstatus(j);
	kstatus(k);
	gameflow(j, k, jhead, khead);
}
