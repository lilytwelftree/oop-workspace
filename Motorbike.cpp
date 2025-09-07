#include "Motorbike.h"
#include <ctime>

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int actualDuration = static_cast<int>(std::difftime(currentTime, getTimeOfEntry()));
    return static_cast<int>(actualDuration * 0.85);
}