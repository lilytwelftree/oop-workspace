#include <iostream>
#include "Car.h"

Car::Car() : Vehicle(){};

Car::Car(int ID) : Vehicle(ID){};

int Car::getParkingDuration(){
    int secondsParked = timeOfEntry * 0.9;
    return secondsParked;
};