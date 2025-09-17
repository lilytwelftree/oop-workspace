#include <iostream>
#include "Bus.h"

Bus::Bus() : Vehicle(){};

Bus::Bus(int ID) : Vehicle(ID){};

int Bus::getParkingDuration(){
    int secondsParked = timeOfEntry * 0.75;
    return secondsParked;
};