#include <iostream>
#include "Player.h"

Player::Player()
    :Player("Guest", 1, "PC"){};

Player::Player(std::string username, int skill_level, std::string platform)
    :username(username), skill_level(skill_level), platform(platform){};

std::string Player::get_username(){
    return username;
};

int Player::get_skill_level(){
    return skill_level;
};

std::string Player::get_platform(){
    return platform;
};

std::string Player::get_profile(){
    std:: string Profile;
    Profile = username + "," + std::to_string(skill_level) + "," + platform;
    return Profile;
};