#ifndef WIZARD_H 
#define WIZARD_H 

#include <iostream>
#include <string>
#include "Player.h"


class wizard: public Player{
    private:
        int mana;
    public:
        wizard();
        wizard(std::string name, int health, int damage, int mana);
        // deals damage to the opponent based on the player's mana points
        void castSpell(Player* opponent);
        int get_mana();
};

#endif