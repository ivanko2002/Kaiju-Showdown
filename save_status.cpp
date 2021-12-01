// Save game status for the two players
// Take date input

#include <iostream>
#include <fstream>
#include "struct.h"

using namespace std;

void save_status(Player1 &j, Player2 &k){

	string name, date;
	cout << "Enter you name: " << endl;
	cin >> name;
	cout << "Enter today's date (dd/mm):  " << endl;
	cin >> date;

	string final_file = name + date + "_.txt";

	ofstream fout;
	fout.open(final_file);

	fout << "Jaegar" << endl;

	fout << "Name: " << endl;
	fout << j.name << endl;

	fout << "hp: " << endl;
	fout << j.hp << endl;

	fout << "ap: " << endl;
	fout << j.ap << endl;
    
	fout << "xp: " << endl;
	fout << j.xp << endl;

	fout << "dp: " << endl;
	cout << j.dp << endl;

	fout << "sp: " << endl;
	fout << j.sp << endl;
      
	fout << "Skill_1: " << endl;
	fout << j.skill_1 << endl;

	fout << "XP_1: " << endl;
	fout << j.xp1 << endl;

	fout << "Damage_1: " << endl;
	fout << j.damage1 << endl;

	fout << "Skill_2: " << endl;
	fout << j.skill_2 << endl;

	fout << "XP_2: " << endl;
	fout << j.xp2 << endl;

	fout << "Damage_2: " << endl;
	fout << j.damage1 << endl;

	fout << "Skill_3: " << endl;
	fout << j.skill_3 << endl;
	
	fout << "XP_3: " << endl;
	fout << j.xp3 << endl;

	fout << "Damage_3: " << endl;
	fout << j.damage3 << endl;

	fout << "End of Jaegar" << endl << endl;

	fout << "Kaiju" << endl;

	fout << "Name: " << endl;
	fout << k.name << endl;

	fout << "hp: " << endl;
	fout << k.hp << endl;

	fout << "ap: " << endl;
	fout << k.ap << endl;
    
	fout << "xp: " << endl;
	fout << k.xp << endl;

	fout << "dp: " << endl;
	fout << k.dp << endl;

	fout << "sp: " << endl;
	fout << k.sp << endl;
      
	fout << "Skill_1: " << endl;
	fout << k.skill_1 << endl;

	fout << "XP_1: " << endl;
	fout << k.xp1 << endl;

	fout << "Damage_1: " << endl;
	fout << k.damage1 << endl;

	fout << "Skill_2: " << endl;
	fout << k.skill_2 << endl;

	fout << "XP_2: " << endl;
	fout << k.xp2 << endl;

	fout << "Damage_2: " << endl;
	fout << k.damage1 << endl;

	fout << "Skill_3: " << endl;
	fout << k.skill_3 << endl;
	
	fout << "XP_3: " << endl;
	fout << k.xp3 << endl;

	fout << "Damage_3: " << endl;
	fout << k.damage3 << endl;

	fout << "End of Kaiju" << endl;

}
