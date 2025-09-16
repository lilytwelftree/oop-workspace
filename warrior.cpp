
#include <iostream>
#include <string>
#include "warrior.h"

warrior::warrior() : Player(){
    weapon = "sword";
};

warrior::warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage) {
    this->weapon = weapon;
};

void warrior::swingWeapon(Player* opponent){
    opponent->takeDamage(get_damage());
    // this->opponent = opponent;
    std::cout << name << " swings their " << weapon << " at " << opponent->get_name() << "!\n";
};

std::string warrior::get_weapon(){
    return weapon;
};
