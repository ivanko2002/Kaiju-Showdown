// Save game status for the two players
// Take date input

#include <iostream>
#include <fstream>
#include "struct.h"

using namespace std;

void save_status(Player1 &j, Player2 &k)
{

	string date;
	cout << "Enter today's date (dd/mm):  " << endl;
	cin >> date

	string final_file = date + "_.txt";

	ofstream fout;
	fout.open(final_file);

	jprop * now = j.bag;

	kprop * now = k.bag;

	fout << "Jaegar" << endl;

	fout << "Name: " << j.name << endl;

	fout << "Health Point: " << j.hp << endl;

	fout << "Attack Power: " << j.ap << endl;
    
	fout << "Experience Point: " << j.xp << endl;

	fout << "Defensive Point: " << j.dp << endl;

	fout << "Speed: " << j.sp << endl;
      
	fout << "Skill_1: " << j.skill_1 << endl;

	fout << "XP_1: " << j.xp1 << endl;

	fout << "Damage_1: " << j.damage1 << endl;

	fout << "Skill_2: " << j.skill_2 << endl;

	fout << "XP_2: " << j.xp2 << endl;

	fout << "Damage_2: " << j.damage1 << endl;

	fout << "Skill_3: " << j.skill_3 << endl;
	
	fout << "XP_3: " << j.xp3 << endl;

	fout << "Damage_3: " << j.damage3 << endl;

	fout << "End of Jaegar" << endl << endl;

	fout << "Kaiju" << endl;

	fout << "Name: " << k.name << endl;

	fout << "Health Point: " << k.hp << endl;

	fout << "Attack Power: " << k.ap << endl;
    
	fout << "Experience Point: " << k.xp << endl;

	fout << "Defensive Point: " << k.dp << endl;

	fout << "Speed: " << k.sp <<endl;
      
	fout << "Skill_1: " << k.skill_1 << endl;

	fout << "XP_1: " << k.xp1 << endl;

	fout << "Damage_1: " << k.damage1 << endl;

	fout << "Skill_2: " << k.skill_2 << endl;

	fout << "XP_2: " << k.xp2 << endl;

	fout << "Damage_2: " << k.damage1 << endl;

	fout << "Skill_3: " << k.skill_3 << endl;
	
	fout << "XP_3: " << k.xp3 << endl;

	fout << "Damage_3: " << k.damage3 << endl;

	fout << "End of Kaiju" << endl;


	while (now != NULL)
	{
		fout << now -> jprop_name << endl;
	       	fout << now -> quantity << endl;
		now = now -> next;

		fout << now -> kprop_name << endl;
		fout << now -> quantity << endl;
		now = now -> next;
	}
	fout.close();
}
