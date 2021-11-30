// Function that return the status of kaiju
// Take input from player's data 

#include<iostream>
#include "struct.h"

using namespace std;

void kstatus(Player2 &k){
    
    cout << "Name: " << k.name << endl;
    cout << "Type: Kaiju" << endl;
    cout << "Health Point: " << k.hp << endl;
    cout << "Attack Power: " << k.ap << endl;
    cout << "Experience Point: " << k.xp << endl;
    cout << "Defense Point: " << k.dp << endl;
    cout << "Speed: " << k.sp << endl;

}


