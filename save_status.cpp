// Save game status for the two players
// Take date input

#include <iostream>
#include <fstream>
#include "struct.h"

using namespace std;

void save_status(Player1 &j, Player2 &k)
{
	string final_file = "savefile.txt";

	ofstream fout;
	fout.open(final_file);
	fout << j.name << endl;
	fout << j.hp << endl;
	fout << j.ap << endl;
	fout << j.xp << endl;
	fout << j.dp << endl;
	fout << j.sp << endl;
	fout << j.skill_1 << endl;
	fout << j.xp1 << endl;
	fout << j.damage1 << endl;
	fout << j.skill_2 << endl;
	fout << j.xp2 << endl;
	fout << j.damage1 << endl;
	fout << j.skill_3 << endl;
	fout << j.xp3 << endl;
	fout << j.damage3 << endl;
	fout << k.name << endl;
	fout << k.hp << endl;
	fout << k.ap << endl;
	fout << k.xp << endl;
	fout << k.dp << endl;
	fout << k.sp << endl;
	fout << k.skill_1 << endl;
	fout << k.xp1 << endl;
	fout << k.damage1 << endl;
	fout << k.skill_2 << endl;
	fout << k.xp2 << endl;
	fout << k.damage1 << endl;
	fout << k.skill_3 << endl;
	fout << k.xp3 << endl;
	fout << k.damage3 << endl;
	fout.close();
}
