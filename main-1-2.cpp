#include <iostream>
#include <string>
#include "GameClan.h"

int main(){

    //create some players

    Player james = Player();
    Player lily = Player("Expert", 3, "PC");
    Player tony = Player("Medium", 1, "Mac");

    // create game clan 
    GameClan my_clan = GameClan(4);

    // add the players
    my_clan.recruit_player(james);
    my_clan.recruit_player(lily);
    my_clan.recruit_player(tony);

    // see members
    my_clan.get_team_details();
    // std:: cout << full_team_details << std::endl;

    return 0;
}