// Storage of structs and functions

#include<iostream>
#include <vector>
#include <random>


using namespace std;

struct jaegar
{
    string name;
    int hp;
    int ap;
    int xp;
    int dp;
    string skill_1;
    string skill_2;
    string skill_3;
    int xp1;
    int xp2;
    int xp3;
    int damage1;
    int damage2;
    int damage3;

    };

struct kaiju
{
    string name;
    int hp;
    int ap;
    int xp;
    int dp;
    string skill_1;
    string skill_2;
    string skill_3;
    int xp1;
    int xp2;
    int xp3;
    int damage1;
    int damage2;
    int damage3;

    };

struct Player1
{
    string name;
    string type;
    int hp;
    int ap;
    int xp;
    int dp;
    string prop;

   };

struct Player2
{
    string name;
    string type;
    int hp;
    int ap;
    int xp;
    int dp;
    string prop;

   };

struct prop
{
    string prop_name;
    int quantity;
    prop * next;
};

void choose_jaegar(vector<jaegar> &j);
void choose_kaiju(vector<kaiju> &k);
void jstatus(Player1 &j);
void kstatus(Player2 &k);
void jprops(Player1 &j);
void kprops(Player2 &k);
string jcohice();
string kchoice();
string battlefield(int n, Player1 &j, Player2 &k);
