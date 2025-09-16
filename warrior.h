#ifndef WARRIOR_H 
#define WARRIOR_H 

#include <iostream>
#include <string>
#include "Player.h"

class warrior: public Player{
    private:
        std::string weapon;
        // Player* opponent; // delete opponent
        // Player** opponent; // needs delete[] opponent
    public:
        // deaks damage to the oponent based on the plater's weapon damage points
        warrior();
        warrior(std::string name, int health, int damage, std::string weapon);
        void swingWeapon(Player* opponent);
        std::string get_weapon();
};

#endif