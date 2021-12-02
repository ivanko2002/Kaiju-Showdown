// Storage of structs and functions

#include <iostream>
#include <vector>
#include <random>

using namespace std;

struct jprop
{

    string jprop_name;
    int quantity;
    jprop *next;
};

struct kprop
{

    string kprop_name;
    int quantity;
    kprop *next;
};

struct j
{

    string name;
    int hp;
    int ap;
    int xp;
    int dp;
    int sp;
    string skill_1;
    string skill_2;
    string skill_3;
    int xp1;
    int xp2;
    int xp3;
    int damage1;
    int damage2;
    int damage3;
    int rxp;
    int rhp;
};

struct k
{

    string name;
    int hp;
    int ap;
    int xp;
    int dp;
    int sp;
    string skill_1;
    string skill_2;
    string skill_3;
    int xp1;
    int xp2;
    int xp3;
    int damage1;
    int damage2;
    int damage3;
    int rxp;
    int rhp;
};

struct Player1
{
    string name;
    int hp;
    int ap;
    int xp;
    int dp;
    int sp;
    jprop *bag = new jprop;
    string skill_1;
    string skill_2;
    string skill_3;
    int xp1;
    int xp2;
    int xp3;
    int damage1;
    int damage2;
    int damage3;
    int rxp;
    int rhp;
};

struct Player2
{

    string name;
    int hp;
    int ap;
    int xp;
    int dp;
    int sp;
    kprop *bag = new kprop;
    string skill_1;
    string skill_2;
    string skill_3;
    int xp1;
    int xp2;
    int xp3;
    int damage1;
    int damage2;
    int damage3;
    int rxp;
    int rhp;
};

void load_game(Player1 &j, Player2 &k);
void save_status(Player1 &j, Player2 &k);
void instruction();
void startgame_menu();
int newgame();
void jaegar_bag(Player1 &j,jprop *&jhead);
void kaiju_bag(Player2 &k);
void choose_jaegar(vector<j> &jaegar);
void choose_kaiju(vector<k> &kaiju);
void jstatus(Player1 &j);
void kstatus(Player2 &k);
void jprops(Player1 &j,jprop *&jhead);
void kprops(Player2 &k,kprop *&khead);
string jchoice();
string kchoice();
void battlefield(int n, Player1 &j, Player2 &k);
void instruction();
int gameflow(Player1 &p1, Player2 &p2, jprop *&jhead, kprop *&khead);
