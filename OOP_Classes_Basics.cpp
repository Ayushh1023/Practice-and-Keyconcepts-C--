#include <iostream>
#include <bits/stdc++.h>
#include <random>
#include <string>
#include <vector>
using namespace std;

class Player
{
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string);
    bool is_dead();
};

class Account
{
    string name;
    double balance;

    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Account ayush_account;
    Account shashank_account;


    Player frank;
    Player hero;

    Player players[]{frank, hero}; // array

    vector<Player> player_vec{frank}; // vector
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}