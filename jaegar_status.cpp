// Return the status of jaegar
// Take input from player's data and outputs relevant information


#include <iostream>
#include "struct.h"

using namespace std;

void jstatus(Player1 &j)
{
    cout << "Name: " << j.name << endl;
    cout << "Type: " << j.type << endl;
    cout << "Health Point: " << j.hp << endl;
    cout << "Attack Power: " << j.ap << endl;
    cout << "Experience Point: " << j.xp << endl;
    cout << "Defense Point: " << j.dp << endl;

}



