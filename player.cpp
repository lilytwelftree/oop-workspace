#include <iostream>
#include <string>
#include "Player.h"

Player::Player(){
    Player("No Name", 0, 0);
};

// constructor that sets the data members to the given values
Player::Player(std::string name, int health, int damage)
    :name(name), health(health), damage(damage){};

// deals damage to the opponent based on the player's damage points
void Player::attack(Player* opponent, int damage){
    damage += this->damage;
};

// reduces the player's health by the given amount
void Player::takeDamage(int damage){
    this->damage = damage;
    health -= damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
};

std::string Player::get_name() {
    return name;
};

int Player::get_health() {
    return health;
};

int Player::get_damage() {
    return damage;
};

