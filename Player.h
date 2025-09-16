#ifndef PLAYER_H 
#define PLAYER_H 

#include <iostream>
#include <string>

class Player{
    protected:
        std::string name;
        int health;
        int damage;

    public:
        // constructor that sets the data members to the given values
        Player();
        Player(std::string name, int health, int damage);

        // deals damage to the opponent based on the player's damage points
        void attack(Player* opponent, int damage);

        // reduces the player's health by the given amount
        void takeDamage(int damage);

        std::string get_name();
        int get_health();
        int get_damage();
};

#endif
