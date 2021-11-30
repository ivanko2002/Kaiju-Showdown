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
            switch (p1choice)
            {
            case 1:
                flag = 1;
                break;
            case 2:
                flag = 1;
                break;
            case 3:
                if (p1.xp < p1.xp1)
                {
                    cout << "Not enough xp to use " << p1.skill_1 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 4:
                if (p1.xp < p1.xp2)
                {
                    cout << "Not enough xp to use " << p1.skill_2 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 5:
                if (p1.xp < p1.xp3)
                {
                    cout << "Not enough xp to use " << p1.skill_3 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 6:
                system("CLS");
                jstatus(p1);
                break;
            case 7:
                //savefile();
                exit_flag = 1;
                cout << "Game saved, relocating to main menu\n";
                break;
            default:
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
            switch (p2choice)
            {
            case 1:
                flag = 1;
                break;
            case 2:
                flag = 1;
                break;
            case 3:
                if (p2.xp < p2.xp1)
                {
                    cout << "Not enough xp to use " << p2.skill_1 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 4:
                if (p2.xp < p2.xp2)
                {
                    cout << "Not enough xp to use " << p2.skill_2 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 5:
                if (p2.xp < p2.xp3)
                {
                    cout << "Not enough xp to use " << p2.skill_3 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 6:
                system("CLS");
                kstatus(p2);
                break;
            case 7:
                //savefile();
                exit_flag = 1;
                cout << "Game saved, relocating to main menu\n";
                break;
            default:
                cout << "Incorrect input, please try again\n";
            }
        }
        if (exit_flag == 1)
        {
            return exit_flag;
        }
        if (p1.sp > p2.sp)
        {
        }
    }
}