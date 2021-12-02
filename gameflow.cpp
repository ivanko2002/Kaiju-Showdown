//Function to control gameflow
//Take the data of both players

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "struct.h"

using namespace std;
int gameflow(Player1 &p1, Player2 &p2, jprop *&jhead, kprop *&khead)
{
    srand((unsigned)time(0));
    int exit_flag = 0;
    while (exit_flag == 0)
    {
        system("CLS");
        int flag = 0;
        int p1choice = 0, p2choice = 0;
        while (exit_flag == 0 and flag == 0)
        {
            cout << "Player 1 choose an action for " << p1.name << endl;
            cout << "1. Normal Attack\n";
            cout << "2. Charge xp\n";
            cout << "3. Heal\n";
            cout << "4. " << p1.skill_1 << endl;
            cout << "5. " << p1.skill_2 << endl;
            cout << "6. " << p1.skill_3 << endl;
            cout<<"7. Use item in inventory\n";
            cout << "8. View jaegar status\n";
            cout << "9.Save and back to main menu\n";
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
                flag = 1;
                break;
            case 4:
                if (p1.xp < p1.xp1)
                {
                    cout << "Not enough xp to use " << p1.skill_1 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 5:
                if (p1.xp < p1.xp2)
                {
                    cout << "Not enough xp to use " << p1.skill_2 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 6:
                if (p1.xp < p1.xp3)
                {
                    cout << "Not enough xp to use " << p1.skill_3 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 7:
                jaegar_bag(p1,jhead);
                break;
            case 8:
                system("CLS");
                jstatus(p1);
                break;
            case 9:
                save_status(p1,p2);
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
            cout << "3. Heal\n";
            cout << "4. " << p2.skill_1 << endl;
            cout << "5. " << p2.skill_2 << endl;
            cout << "6. " << p2.skill_3 << endl;
            cout << "7. View kaiju status\n";
            cout << "8.Save and back to main menu\n";
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
                flag = 1;
                break;
            case 4:
                if (p2.xp < p2.xp1)
                {
                    cout << "Not enough xp to use " << p2.skill_1 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 5:
                if (p2.xp < p2.xp2)
                {
                    cout << "Not enough xp to use " << p2.skill_2 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 6:
                if (p2.xp < p2.xp3)
                {
                    cout << "Not enough xp to use " << p2.skill_3 << endl;
                }
                else
                {
                    flag = 1;
                }
                break;
            case 7:
                system("CLS");
                kstatus(p2);
                break;
            case 8:
                save_status(p1,p2);
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
        int temp;
        if (p1.sp > p2.sp)
        {
            switch (p1choice)
            {
            case 1:
                p2.hp -= (p1.ap - p2.dp);
                cout << p1.name << " used normal attack!\n";
                cout << p1.ap - p2.dp << " damage was dealt to " << p2.name << endl;
                cout << p2.name << " has " << p2.hp << "hp remaining\n";
                break;
            case 2:
                temp = rand() % p1.rxp + 1;
                p1.xp += temp;
                cout << p1.name << " used charge!\n";
                cout << temp << "xp was charged\n";
                break;
            case 3:
                temp = rand() % p1.rhp + 1;
                cout << p1.name << " used heal!\n";
                cout << temp << "hp was recovered\n";
                break;
            case 4:
                p2.hp -= (p1.damage1 - p2.dp);
                p1.xp -= p1.xp1;
                cout << p1.name << " used " << p1.skill_1 << endl;
                cout << p1.damage1 - p2.dp << " damage was dealt to " << p2.name << endl;
                cout << p2.name << " has " << p2.hp << "hp remaining\n";
                cout << p1.name << " has " << p1.xp << "xp remaining\n";
                break;
            case 5:
                p2.hp -= (p1.damage2 - p2.dp);
                p1.xp -= p1.xp2;
                cout << p1.name << " used " << p1.skill_2 << endl;
                cout << p1.damage2 - p2.dp << " damage was dealt to " << p2.name << endl;
                cout << p2.name << " has " << p2.hp << "hp remaining\n";
                cout << p1.name << " has " << p1.xp << "xp remaining\n";
                break;
            case 6:
                p2.hp -= (p1.damage3 - p2.dp);
                p1.xp -= p1.xp3;
                cout << p1.name << " used " << p1.skill_3 << endl;
                cout << p1.damage3 - p2.dp << " damage was dealt to " << p2.name << endl;
                cout << p2.name << " has " << p2.hp << "hp remaining\n";
                cout << p1.name << " has " << p1.xp << "xp remaining\n";
                break;
            }
            if (p2.hp <= 0)
            {
                cout << p2.name << " has been defeated\n";
                cout << "Player 1 wins\n";
                exit_flag = 1;
                return exit_flag;
            }
            else
            {
                switch (p2choice)
                {
                case 1:
                    p1.hp -= (p2.ap - p1.dp);
                    cout << p2.name << " used normal attack!\n";
                    cout << p2.ap - p1.dp << " damage was dealt to " << p2.name << endl;
                    cout << p1.name << " has " << p1.hp << "hp remaining\n";
                    break;
                case 2:
                    temp = rand() % p1.rxp + 1;
                    p1.xp += temp;
                    cout << p1.name << " used charge!\n";
                    cout << temp << "xp was charged\n";
                    break;
                case 3:
                    temp = rand() % p1.rhp + 1;
                    cout << p1.name << " used heal!\n";
                    cout << temp << "hp was recovered\n";
                    break;
                case 4:
                    p1.hp -= (p2.damage1 - p1.dp);
                    p2.xp -= p2.xp1;
                    cout << p2.name << " used " << p2.skill_1 << endl;
                    cout << p2.damage1 - p1.dp << " damage was dealt to " << p1.name << endl;
                    cout << p1.name << " has " << p1.hp << "hp remaining\n";
                    cout << p2.name << " has " << p2.xp << "xp remaining\n";
                    break;
                case 5:
                    p1.hp -= (p2.damage1 - p1.dp);
                    p2.xp -= p2.xp2;
                    cout << p2.name << " used " << p2.skill_2 << endl;
                    cout << p2.damage2 - p1.dp << " damage was dealt to " << p1.name << endl;
                    cout << p1.name << " has " << p1.hp << "hp remaining\n";
                    cout << p2.name << " has " << p2.xp << "xp remaining\n";
                    break;
                case 6:
                    p1.hp -= (p2.damage1 - p1.dp);
                    p2.xp -= p2.xp3;
                    cout << p2.name << " used " << p2.skill_3 << endl;
                    cout << p2.damage3 - p1.dp << " damage was dealt to " << p1.name << endl;
                    cout << p1.name << " has " << p1.hp << "hp remaining\n";
                    cout << p2.name << " has " << p2.xp << "xp remaining\n";
                    break;
                }
                if (p1.hp <= 0)
                {
                    cout << p1.name << " has been defeated\n";
                    cout << "Player 2 wins\n";
                    exit_flag = 1;
                    return exit_flag;
                }
                else
                {
                    system("pause");
                }
            }
        }
        else
        {
            switch (p2choice)
            {
            case 1:
                p1.hp -= (p2.ap - p1.dp);
                cout << p2.name << " used normal attack!\n";
                cout << p2.ap - p1.dp << " damage was dealt to " << p2.name << endl;
                cout << p1.name << " has " << p1.hp << "hp remaining\n";
                break;
            case 2:
                temp = rand() % p1.rxp + 1;
                p1.xp += temp;
                cout << p1.name << " used charge!\n";
                cout << temp << "xp was charged\n";
                break;
            case 3:
                temp = rand() % p1.rhp + 1;
                cout << p1.name << " used heal!\n";
                cout << temp << "hp was recovered\n";
                break;
            case 4:
                p1.hp -= (p2.damage1 - p1.dp);
                p2.xp -= p2.xp1;
                cout << p2.name << " used " << p2.skill_1 << endl;
                cout << p2.damage1 - p1.dp << " damage was dealt to " << p1.name << endl;
                cout << p1.name << " has " << p1.hp << "hp remaining\n";
                cout << p2.name << " has " << p2.xp << "xp remaining\n";
                break;
            case 5:
                p1.hp -= (p2.damage1 - p1.dp);
                p2.xp -= p2.xp2;
                cout << p2.name << " used " << p2.skill_2 << endl;
                cout << p2.damage2 - p1.dp << " damage was dealt to " << p1.name << endl;
                cout << p1.name << " has " << p1.hp << "hp remaining\n";
                cout << p2.name << " has " << p2.xp << "xp remaining\n";
                break;
            case 6:
                p1.hp -= (p2.damage1 - p1.dp);
                p2.xp -= p2.xp3;
                cout << p2.name << " used " << p2.skill_3 << endl;
                cout << p2.damage3 - p1.dp << " damage was dealt to " << p1.name << endl;
                cout << p1.name << " has " << p1.hp << "hp remaining\n";
                cout << p2.name << " has " << p2.xp << "xp remaining\n";
                break;
            }
            if (p1.hp <= 0)
            {
                cout << p1.name << " has been defeated\n";
                cout << "Player 2 wins\n";
                exit_flag = 1;
                return exit_flag;
            }
            else
            {
                switch (p1choice)
                {
                case 1:
                    p2.hp -= (p1.ap - p2.dp);
                    cout << p1.name << " used normal attack!\n";
                    cout << p1.ap - p2.dp << " damage was dealt to " << p2.name << endl;
                    cout << p2.name << " has " << p2.hp << "hp remaining\n";
                    break;
                case 2:
                    temp = rand() % p1.rxp + 1;
                    p1.xp += temp;
                    cout << p1.name << " used charge!\n";
                    cout << temp << "xp was charged\n";
                    break;
                case 3:
                    temp = rand() % p1.rhp + 1;
                    cout << p1.name << " used heal!\n";
                    cout << temp << "hp was recovered\n";
                    break;
                case 4:
                    p2.hp -= (p1.damage1 - p2.dp);
                    p1.xp -= p1.xp1;
                    cout << p1.name << " used " << p1.skill_1 << endl;
                    cout << p1.damage1 - p2.dp << " damage was dealt to " << p2.name << endl;
                    cout << p2.name << " has " << p2.hp << "hp remaining\n";
                    cout << p1.name << " has " << p1.xp << "xp remaining\n";
                    break;
                case 5:
                    p2.hp -= (p1.damage2 - p2.dp);
                    p1.xp -= p1.xp2;
                    cout << p1.name << " used " << p1.skill_2 << endl;
                    cout << p1.damage2 - p2.dp << " damage was dealt to " << p2.name << endl;
                    cout << p2.name << " has " << p2.hp << "hp remaining\n";
                    cout << p1.name << " has " << p1.xp << "xp remaining\n";
                    break;
                case 6:
                    p2.hp -= (p1.damage3 - p2.dp);
                    p1.xp -= p1.xp3;
                    cout << p1.name << " used " << p1.skill_3 << endl;
                    cout << p1.damage3 - p2.dp << " damage was dealt to " << p2.name << endl;
                    cout << p2.name << " has " << p2.hp << "hp remaining\n";
                    cout << p1.name << " has " << p1.xp << "xp remaining\n";
                    break;
                }
                if (p2.hp <= 0)
                {
                    cout << p2.name << " has been defeated\n";
                    cout << "Player 1 wins\n";
                    exit_flag = 1;
                    return exit_flag;
                }
                else
                {
                    system("pause");
                }
            }
        }
        system("CLS");
        
        jprops(p1,jhead);
        system("CLS");
        kprops(p2,khead);
    }
    return exit_flag;
}