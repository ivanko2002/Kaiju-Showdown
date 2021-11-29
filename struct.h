// Storage of structs and functions

#include<iostream>
#include <vector>
#include <random>

using namespace std;

struct jprop
{
    string jprop_name;
    int quantity;
    jprop * next;
};

struct kprop
{
    string kprop_name;
    int quantity;
    kprop * next;
};

struct j
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

struct k
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
    jprop * bag;
    
   };

struct Player2
{
    string name;
    string type;
    int hp;
    int ap;
    int xp;
    int dp;
    kprop * bag;

   };

void jaegar_bag(Player1 &j);
void kaiju_bag(Player2 &k);
void choose_jaegar(vector<j> &jaegar);
void choose_kaiju(vector<k> &kaiju);
void jstatus(Player1 &j);
void kstatus(Player2 &k);
void jprops(Player1 &j);
void kprops(Player2 &k);
string jchoice();
string kchoice();
void battlefield(int n, Player1 &j, Player2 &k);
