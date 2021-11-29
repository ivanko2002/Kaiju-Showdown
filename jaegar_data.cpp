//Function that stores data of jaegar by using struct

#include <iostream>
#include <string>
#include "struct.h"

using namespace std;

void choose_jaegar(vector<j> &jaegar)
{

	j GD;
	GD.name = "Gipsy Danger";
	GD.hp = 1500;
	GD.ap = 50;
	GD.xp = 100;
	GD.dp = 20;
	GD.sp = 100;
	GD.skill_1 = "Elbow Rocket";
	GD.xp1 = 20;
	GD.damage1 = 100;
	GD.skill_2 = "Palm Grip Backslash";
	GD.xp2 = 40;
	GD.damage2 = 150;
	GD.skill_3 = "Plasma Cannon";
	GD.xp3 = 150;
	GD.damage3 = 300;

	j SE;
	SE.name = "Striker Eureka";
	SE.hp = 1200;
	SE.ap = 45;
	SE.xp = 150;
	SE.dp = 10;
	SE.sp = 150;
	SE.skill_1 = "AKM Chest Launcher";
	SE.xp1 = 15;
	SE.damage1 = 120;
	SE.skill_2 = "Sting-Blades";
	SE.xp2 = 45;
	SE.damage2 = 200;
	SE.skill_3 = "Nuclear Payload";
	SE.xp3 = 200;
	SE.damage3 = 500;

	j CT;
	CT.name = "Crimson Typhoon";
	CT.hp = 1000;
	CT.ap = 50;
	CT.xp = 120;
	CT.dp = 30;
	CT.sp = 200;
	CT.skill_1 = "Jet Kick";
	CT.xp1 = 50;
	CT.damage1 = 175;
	CT.skill_2 = "Sterno Piston";
	CT.xp2 = 70;
	CT.damage2 = 250;
	CT.skill_3 = "Thunder Cloud Formation";
	CT.xp3 = 300;
	CT.damage3 = 800;

	j MA;
	MA.name = "Mammoth Apostle";
	MA.hp = 1150;
	MA.ap = 40;
	MA.xp = 135;
	MA.dp = 55;
	MA.sp = 175;
	MA.skill_1 = "Apolo Punch";
	MA.xp1 = 35;
	MA.damage1 = 125;
	MA.skill_2 = "Mammoth Slash";
	MA.xp2 = 55;
	MA.damage2 = 225;
	MA.skill_3 = "MA Salvation";
	MA.xp2 = 285;
	MA.damage2 = 755;

	j HH;
	HH.name = "Hydra Hyperion";
	HH.hp = 950;
	HH.ap = 100;
	HH.xp = 150;
	HH.dp = 25;
	HH.sp = 160;
	HH.skill_1 = "Hydra Beacham";
	HH.xp1 = 30;
	HH.damage1 = 150;
	HH.skill_2 = "Hyper Jump";
	HH.xp2 = 275;
	HH.damage2 = 300;
	HH.skill_3 = "Shatterdome";
	HH.xp3 = 350;
	HH.damage3 = 950;

	jaegar.push_back(GD);
	jaegar.push_back(SE);
	jaegar.push_back(CT);
	jaegar.push_back(MA);
	jaegar.push_back(HH);
}
