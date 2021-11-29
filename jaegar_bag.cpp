// Print props in bag
// Take player data as input
// Relevant prop will be outputted

#include <iostream>
#include "struct.h"

using namespace std;

void jaegar_bag(Player1 &j)
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


