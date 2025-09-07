#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {
    vehicles = new Vehicle*[maxCapacity];
    for (int i = 0; i < maxCapacity; i++) {
        vehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot() {
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return currentCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return;
    }
    
    for (int i = 0; i < maxCapacity; i++) {
        if (vehicles[i] == nullptr) {
            vehicles[i] = vehicle;
            currentCount++;
            break;
        }
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < maxCapacity; i++) {
        if (vehicles[i] != nullptr && vehicles[i]->getId() == id) {
            vehicles[i] = nullptr;
            currentCount--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}