#include "Car.h"
#include <ctime>

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    std::time_t currentTime = std::time(nullptr);
    int actualDuration = static_cast<int>(std::difftime(currentTime, getTimeOfEntry()));
    return static_cast<int>(actualDuration * 0.9);
}