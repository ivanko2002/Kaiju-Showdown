//Function to control gameflow
//Take the data of both players

#include <iostream>
#include <string>
#include "struct.h"

using namespace std;
int gameflow(Player1 &p1, Player2 &p2)
{
    int exit_flag = 0;
    while (exit_flag == 0)
    {
        system("CLS");
        int flag = 0;
        int p1choice, p2choice;
        while (exit_flag == 0 and flag == 0)
        {
            cout << "Player 1 choose an action for " << p1.name << endl;
            cout << "1. Normal Attack\n";
            cout << "2. Charge xp\n";
            cout << "3. " << p1.skill_1 << endl;
            cout << "4. " << p1.skill_2 << endl;
            cout << "5. " << p1.skill_3 << endl;
            cout << "6. View jaegar status\n";
            cout << "7.Save and back to main menu\n";
            cin >> p1choice;
            
            if (p1choice > 0 and p1choice < 8)
            {
                if (p1choice == 6)
                {
                    //savefile();
                    exit_flag = 1;
                    cout << "Game saved, relocating to main menu\n";
                }
                flag = 1;
            }
            else
            {
                cout << "Incorrect input, please try again\n";
            }
        }
        if (exit_flag == 1)
        {
            return exit_flag;
        }
        system("CLS");
        flag = 0;
        while (exit_flag == 0 and flag == 0)
        {
            cout << "Player 2 choose an action for " << p2.name << endl;
            cout << "1. Normal Attack\n";
            cout << "2. Charge xp\n";
            cout << "3. " << p2.skill_1 << endl;
            cout << "4. " << p2.skill_2 << endl;
            cout << "5. " << p2.skill_3 << endl;
            cout << "6.Save and back to main menu\n";
            cin >> p2choice;
            if (p2choice > 0 and p2choice < 7)
            {
                if (p2choice == 6)
                {
                    //savefile();
                    exit_flag = 1;
                    cout << "Game saved, relocating to main menu\n";
                }
                flag = 1;
            }
            else
            {
                cout << "Incorrect input, please try again\n";
            }
        }
        if (exit_flag == 1)
        {
            return exit_flag;
        }
        if (p1.sp>p2.sp){

        }
    }
}