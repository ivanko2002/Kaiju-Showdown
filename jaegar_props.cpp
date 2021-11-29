//Function for player to exchange props by xp
//Take number as input and return the corresponding props
       	
#include <iostream>
#include <string>
#include "struct.h"
using namespace std;

void jprops(Player1 &j){

	jprop* start = j.bag;
	jprop* now = start;
	int choice;
	string jprop;
	while (true){	
		cout << "Remaining XP" << j.xp << endl;

		cout << "Weapons available:"  << endl;
		cout << endl; 

		cout << "1. I-19 Plasmacaster " << endl;
		cout << "Description: A particle dispersal cannon that fired a beam of charged plasma" << endl;
		cout << "Effect: Kaiju's HP -100" << endl;
		cout << "XP in exchange: 30" << endl;
		cout << endl; 

		cout << "2. Plasma Chainsaw" << endl;
		cout << "Description: Dual weapons infused with plasma" << endl;
		cout << "Effect: Jaegar's AP +50" << endl;
		cout << "XP in exchange: 50" << endl;
		cout << endl;

		cout << "3. WMB2x90 Missle Launcher" << endl;
		cout << "Description: A salvo of Anti-Kaiju Missles" << endl;
		cout << "Effect: Jaegar's AP +150" << endl;
		cout << "XP in exchange: 70" << endl;
		cout << endl;

		cin >> choice;
		
		switch(choice){

			case 1:
				if (j.xp < 30) {
					cout << "Insufficient XP!" << endl;
					continue;
				}
				jprop = " I-19 Plasmacaster";
				j.xp -= 30;
				break;

			case 2:
				if (j.xp < 50) {
					cout << "Insufficient XP!" << endl;
					continue;
				}
				jprop = "Plasma Chainsaw";
				j.xp -= 50;
				break;
			
			case 3:
				if (j.xp < 70) {
					cout << "Insufficient XP!" << endl;
					continue;
				}
				jprop = "WMB2x90 Missle Launcher";
				j.xp -= 70;
				break;

			default:
				cout << "Invalid input!"<< endl << "Please input a number between 1 - 3" << endl;
				cout << "Your input is ";
		
			}
		while (true){
			if (jprop == now -> jprop_name){
				now -> quantity += 1;
				break;
			}
			else now = now -> next;
		}
		now = start;
	}
}



