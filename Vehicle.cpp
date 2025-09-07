#include "Vehicle.h"
#include <ctime>

Vehicle::Vehicle(int vehicleId) : id(vehicleId) {
    timeOfEntry = std::time(nullptr);
}

int Vehicle::getId() const {
    return id;
}

std::time_t Vehicle::getTimeOfEntry() const {
    return timeOfEntry;
}

Vehicle::~Vehicle() {}