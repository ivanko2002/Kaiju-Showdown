//This function starts the game and controls the gameflow

#include <iostream>
#include "struct.h"

using namespace std;

void startgame_menu()
{
    int input, menu_flag = 0, back_flag = 0;
    do
    {
        cout << "Choose a command:\n";
        cout << "1.New game\n";
        cout << "2.Load game\n";
        cout << "3.Back\n";
        cin>>input;
        menu_flag = 1;
        switch (input)
        {
        case 1:
            //newgame();
            system("pause");
            break;
        case 2:
            //loadgame();
            system("pause");
            break;
        case 3:
            back_flag = 1;
            break;
        default:
            cout << "Incorrect input, please try again\n";
            menu_flag = 0;
            break;
        }
    } while (menu_flag == 0 and back_flag == 0);
}
