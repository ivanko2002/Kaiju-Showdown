// Function that print jaegar's props
// Take player data as input

#include <iostream>
#include "struct.h"

using namespace std;

void jaegar_bag(Player1 &j){
	
	jprop* start = j.bag;
	jprop* now = start;
	int i = 1;
	cout << "Jaegar's current props: " << endl;
	while (current != NULL){
		cout << i << ". " << now -> jprop_name << ": " ;
		cout << now -> quantity << endl;
		i++;
		now = now -> next;
	}
}


