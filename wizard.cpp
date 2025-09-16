#include <iostream>
#include <string>
#include "wizard.h"

wizard::wizard() : Player(){
    mana = 0;
};

wizard::wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage) {
    this->mana = mana;
};

void wizard::castSpell(Player* opponent){
    std::cout << name << " casts a spell on " << opponent->get_name() << " for " << damage << " damage.\n";
    opponent->takeDamage(get_damage());
};

int wizard::get_mana(){
    return mana;
};