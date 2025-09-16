#include <iostream>
#include <string>
#include "wizard.h"
#include "warrior.h"

int main(){

    // just see if stuff is working
    warrior damien = warrior("Damien", 10, 4, "stick");
    wizard lucas = wizard("Lucas", 5, 1, 20);
    wizard* lucas_ptr = &lucas;
    Player lily = Player("Lily", 20,20);

    // see if values are working
    std::string lily_name = lily.get_name();
    std::cout << lily_name << std::endl;

    int lucas_health = lucas.get_health();
    std::cout << lucas_health << std::endl;

    int damien_damage = damien.get_damage();
    std::cout << damien_damage << std::endl;

    std::string damien_weapon = damien.get_weapon();
    std::cout << damien_weapon << std::endl;

    // start the battle
    damien.swingWeapon(&lucas);

    return 0;
}