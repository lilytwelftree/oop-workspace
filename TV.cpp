#include <iostream>
#include "TV.h"

TV::TV()
    {};

TV::TV(int powerRating, double screenSize)
    : screenSize(screenSize), Appliance(powerRating){};

void TV::setScreenSize(double screenSize){
    this->screenSize = screenSize;
};

double TV::getScreenSize(){
    return screenSize;
};

double TV::getPowerConsumption(){
    double power_consumption = powerRating * (screenSize / 10);
    return power_consumption;
};