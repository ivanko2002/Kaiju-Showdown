// Function that print kaiju's props 
// Take player data as input

#include <iostream>
#include "struct.h"
 
void kaiju_bag(Player2 &k, kprop *&khead){
	
	kprop* start = khead;
	kprop* now = start;
	int n = 1;
	cout << "Kaiju's current props: " << endl;
	while (now != NULL){
		cout << n << ". " << now -> kprop_name << ": " ;
		cout << now -> quantity << endl;
		n++;
		now = now -> next;
	}
	cout<<n<<". Back\n";
	int input=0;
	while(input==0){
		cin>>input;
		switch(input){
			case 1:
			if 
		}
	}

}
