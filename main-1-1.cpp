#include <iostream>
#include <string>
#include "Player.h"

int main(){

    Player james = Player();
    Player lily = Player("Expert", 3, "Mac");

    // call the method on the object
    std::cout << james.get_username() << std::endl;

    std::cout << lily.get_profile() << std::endl;


    return 0;
}