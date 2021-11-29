//function that stores data of Kaiju in vector

#include <iostream>
#include "struct.h"

using namespace std;

void choose_kaiju(vector<k> &kaiju){

	k S;
	S.name = "Slattern";
	S.hp = 2500;
	S.ap = 75;
	S.xp = 100;
	S.dp = 10;
	S.sp = 50;
	S.skill_1 = "Hammer Jaw";
	S.xp1 = 15;
	S.damage1 = 50;
	S.skill_2 = "Spinejackal";
	S.xp2 = 35;
	S.damage2 = 100;
	S.skill_3 = "Slattern Strike";
	S.xp3 = 150;
	S.damage3 = 250;

	k O;
	O.name = "Otachi";
	O.hp = 2000;
	O.ap = 50;
	O.xp = 150;
	O.dp = 15;
	O.sp = 180;
	O.skill_1 = "Prehensile Tail";
	O.xp1 = 15;
	O.damage1 = 35;
	O.skill_2 = "Acid Sack";
	O.xp2 = 40;
	O.damage2 = 125;
	O.skill_3 = "Otachi Strike";
	O.xp3 = 180;
	O.damage3 = 300 ;
	
	k Sc;
	Sc.name = "Scunner";
	Sc.hp = 1800;
	Sc.ap = 60;
	Sc.xp = 120;
	Sc.dp = 20;
	Sc.sp = 80;
	Sc.skill_1 = "Clawhook";
	Sc.xp1 = 25;
	Sc.damage1 = 50;
	Sc.skill_2 = "Meathead";
	Sc.xp2 = 60;
	Sc.damage2 = 160;
	Sc.skill_3 = "Scunner Fury";
	Sc.xp3 = 200;
	Sc.damage3 = 350;

	kaiju I;
	I.name = "Insurrector";
	I.hp = 1200;
	I.ap = 120;
	I.xp = 100;
	I.dp = 10;
	I.sp = 95;
	I.skill_1 = "Insurretor Claw";
	I.xp1 = 30;
	I.damage1 = 130;
	I.skill_2 = "Hammerjaw";
	I.xp2 = 80;
	I.damage2 = 180;
	I.skill_3 = "Insurrection";
	Sc.xp3 = 250;
	Sc.damage3 = 550;

	k A;
	A.name = "Atticon";
	A.hp = 1300;
	A.ap = 30;
	A.xp = 175;
	A.dp = 30;
	A.sp = 100;
	A.skill_1 = "Cherno Alpha";
	A.xp1 = 40;
	A.damage1 = 60;
	A.skill_2 = "Belobog";
	A.xp2 = 75;
	A.damage2 = 160;
	A.skill_3 = "Itak";
	A.xp3 = 225;
	A.damage3 = 400;


	kaiju.push_back(S);
	kaiju.push_back(O);
	kaiju.push_back(Sc);
	kaiju.push_back(I);
	kaiju.push_back(A);
}

