#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(){
    ID = 0;
    timeOfEntry;
};

Vehicle::Vehicle(int ID): ID(ID){
    timeOfEntry;
};

int Vehicle::getID(){
    return ID;
};

int getParkingDuration(){
    return 0;
};