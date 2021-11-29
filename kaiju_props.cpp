//Function for player to exchange props by xp
//Take number as input and return the corresponding prop
       	
#include <iostream>
#include <string>
#include "struct.h"

using namespace std;

void kprops(Player2 &k){

	kprop* start = k.bag;
	kprop* now = start;
	int choice;
	string kprop;
	while (true){	
		
		cout << "Remaining XP" <<k.xp << endl;

		cout << "Powerful organs available:"  << endl;
		cout << endl; 

		cout << "1. Blue Acid " << endl;
		cout << "Description: Toxic agent in the blood of Kaiju" << endl;
		cout << "Effect: Kaiju's HP +100" << endl;
		cout << "XP in exchange: 30" << endl;
		cout << endl; 

		cout << "2. Deadly spiked tails" << endl;
		cout << "Description: 3 killing tails extending Kaiju's chest spike " << endl;
		cout << "Effect: Jaegar's AP +150" << endl;
		cout << "XP in exchange: 70" << endl;
		cout << endl;


		cout << "3. Electronic lobes" << endl;
		cout << "Description: Generate a huge electronic-killing pulse" << endl;
		cout << "Effect: Freeze Jaegar for 3 rounds" << endl;
		cout << "XP in exchange: 90" << endl;
		cout << endl;

	
		cin >> choice;
		
		switch(choice){

			case 1:
				if (k.xp < 30) {
					cout << "Insufficient XP!" << endl;
					continue;
				}
				kprop = "Blue Acid";
				k.xp -= 30;
				break;

			case 2:
				if (k.xp < 50) {
					cout << "Insufficient XP!" << endl;
					continue;
				}
				kprop = "Deadly spiked tails";
				k.xp -= 70;
				break;
			
			case 3:
				if (k.xp < 70) {
					cout << "Insufficient XP!" << endl;
					continue;
				}
				kprop = "Electronic lobes";
				j.xp -= 90;
				break;

			default:
				cout << "Invalid input!" << endl << "Please input a number between 1 - 3" << endl;
				cout << "Your input is ";
		
			}
		while (true){
			if (prop == now -> kprop_name){
				now -> quantity += 1;
				break;
			}
			else now = now -> next;
		}

		now = start;
	}
}



