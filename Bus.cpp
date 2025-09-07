#include "Bus.h"
#include <ctime>

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int actualDuration = static_cast<int>(std::difftime(currentTime, getTimeOfEntry()));
    return static_cast<int>(actualDuration * 0.75);
}