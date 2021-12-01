// Function that print kaiju's props 
// Take player data as input

#include <iostream>
#include "struct.h"

void kaiju_bag(Player2 &k){
	
	kprop* start = k.bag;
	kprop* now = start;
	int n = 1;
	cout << "Kaiju's current props: " << endl;
	while (now != NULL){
		cout << n << ". " << now- > kprop_name << ": " ;
		cout << now -> quantity << endl;
		n++;
		now = now -> next;
	}
}
