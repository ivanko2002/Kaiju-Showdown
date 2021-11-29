// Print props in bag
// Take player data as input
// Relevant prop will be outputted

#include <iostream>
#include "struct.h"



void print_kprop(Player2 &k)
{
	kprop* start = k.bag;
	kprop* now = start;
	int n = 1;
	cout << "Kaiju's current props: " << endl;
	while (current != NULL)
	{
		cout << n << ". " << now->kprop_name << ": " << now ->quantity << endl;
		n++;
		now = now->next;
	}
}
