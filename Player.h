#include <iostream>
#include <string>

class Player {
    private:
        std::string username;
        int skill_level;
        std::string platform;

    public:
        Player();
        Player(std::string username, int skill_level, std::string platform);

        std::string get_username();
        int get_skill_level();
        std::string get_platform();
        std::string get_profile();
};

