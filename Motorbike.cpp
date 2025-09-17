#include <iostream>
#include "Motorbike.h"

Motorbike::Motorbike() : Vehicle(){};

Motorbike::Motorbike(int ID) : Vehicle(ID){};

int Motorbike::getParkingDuration(){
    int secondsParked = timeOfEntry * 0.85;
    return secondsParked;
};