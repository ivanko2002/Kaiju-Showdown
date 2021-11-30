//This function reads players choices for characters

#include <iostream>
#include <cstdlib> 
#include <ctime>
#include "struct.h"

using namespace std;

int newgame()
{
    srand((unsigned)time(0)); 
    string pj, pk;
    Player1 p1;
    Player2 p2;
    vector<j> jaegars;
    vector<k> kaijus;
    system("CLS");
    pj = jchoice();
    choose_jaegar(jaegars);
    for (int i = 0; i < 5; i++)
    {
        if (pj == jaegars.back().name)
        {
            p1.name = jaegars.back().name;
            p1.hp = jaegars.back().hp;
            p1.ap = jaegars.back().ap;
            p1.xp = jaegars.back().xp;
            p1.dp = jaegars.back().dp;
            p1.sp= jaegars.back().sp;
            p1.xp1 = jaegars.back().xp1;
            p1.xp2 = jaegars.back().xp2;
            p1.xp3 = jaegars.back().xp3;
            p1.skill_1 = jaegars.back().skill_1;
            p1.skill_2 = jaegars.back().skill_2;
            p1.skill_3 = jaegars.back().skill_3;
            p1.damage1 = jaegars.back().damage1;
            p1.damage2 = jaegars.back().damage2;
            p1.damage3 = jaegars.back().damage3;
            p1.rxp=jaegars.back().rxp;
            p1.rhp=jaegars.back().rhp;
        }
        else
        {
            jaegars.pop_back();
        }
    }
    cout << p1.name << " was chosen." << endl;
    system("pause");
    system("CLS");
    pk = kchoice();
    choose_kaiju(kaijus);
    for (int i = 0; i < 5; i++)
    {
        if (pk == kaijus.back().name)
        {
            p2.name = kaijus.back().name;
            p2.hp = kaijus.back().hp;
            p2.ap = kaijus.back().ap;
            p2.xp = kaijus.back().xp;
            p2.dp = kaijus.back().dp;
            p2.sp=kaijus.back().sp;
            p2.xp1 = kaijus.back().xp1;
            p2.xp2 = kaijus.back().xp2;
            p2.xp3 = kaijus.back().xp3;
            p2.skill_1 = kaijus.back().skill_1;
            p2.skill_2 = kaijus.back().skill_2;
            p2.skill_3 = kaijus.back().skill_3;
            p2.damage1 = kaijus.back().damage1;
            p2.damage2 = kaijus.back().damage2;
            p2.damage3 = kaijus.back().damage3;
            p2.rhp=kaijus.back().rhp;
            p2.rxp=kaijus.back().rxp;

        }
        else
        {
            kaijus.pop_back();
        }
    }
    cout << p2.name << " was chosen." << endl;
    system("pause");
    system("CLS");
    battlefield((rand()%3)+1,p1,p2);
    system("pause");
    int exit=gameflow(p1,p2);
    return exit;
}
