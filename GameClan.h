#include <iostream>
#include <string>
#include "Player.h"

class GameClan {
    private:
        int max_member;
        int count;
        Player* roster; 
    public:
        GameClan();
        GameClan(int member_limit);
        void get_team_details();
        int get_current_member_count();
        bool has_platform(std:: string platform);
        Player *get_members();
        bool recruit_player(Player new_player);
        bool kick_player(std::string username);
        int count_skilled_players(int min_skill_level);
        ~GameClan();
};

