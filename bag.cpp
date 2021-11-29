// Print props in bag
// Take player data as input
// Relevant prop will be outputted

#include <iostream>
#include "struct.h"

using namespace std;

void print_jprop(Player1 &j)
{
	jprop* start = j.bag;
	jprop* now = start;
	int i = 1;
	cout << "Jaegar's current props: " << endl;
	while (current != NULL)
	{
		cout << i << ". " << now->jprop_name << ": " << now ->quantity << endl;
		i++;
		now = now->next;
	}
}

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
