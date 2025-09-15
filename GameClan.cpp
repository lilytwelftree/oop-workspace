#include <iostream>
#include <string>
#include "GameClan.h"

GameClan::GameClan(){
    max_member = 0;
    count = 0;
    roster = nullptr;
};

GameClan::GameClan(int member_limit){
    max_member = member_limit;
    count = 0;
    roster = new Player[max_member];
};

int GameClan::get_current_member_count(){
    return count;
};

bool GameClan::has_platform(std:: string platform){
    for( int i = 0; i < count; i++){
        if (roster[i].get_platform() == platform){
            return true;
        }
    }
    return false;
};

Player* GameClan::get_members(){
    // get_members is the function
    // Player* is the return type

    return roster; // Returns pointer to the array of players
};

void GameClan::get_team_details(){
    std::string team_details = "";

    for(int i=0; i < count ; i++){
        std::string player_details = roster[i].get_profile();
        team_details += player_details;
    }

    std::cout<< team_details << std::endl;
};

bool GameClan::recruit_player(Player new_player){
    if (count < max_member){
        roster[count] = new_player;
        count ++;
        return true;
    }else{
        return false;
    }
};

bool GameClan::kick_player(std::string username){
    for (int i=0; i < count ; i++){
        if(roster[i].get_username() == username){
            //shoft all players after position i one spot left
            for(int j = i; j < count -1; j++){
                roster[j] = roster[j +1];
            }
            count --;
            return true;
        }
    }
    return false;
};

int GameClan::count_skilled_players(int min_skill_level){
    int number_skilled_players = 0;

    for(int i = 0; i < count; i++){
        if (roster[i].get_skill_level() >= min_skill_level){
            number_skilled_players ++;
        }
    }
    return number_skilled_players;
    
};

GameClan::~GameClan(){
    delete[] roster;
};