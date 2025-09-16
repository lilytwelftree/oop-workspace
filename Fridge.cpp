#include "Fridge.h"
#include <iostream>

Fridge::Fridge(){};

Fridge::Fridge(double volume, int powerRating)
    : volume(volume), Appliance(powerRating){};

void Fridge::setVolume(double volume){
    this->volume = volume;
};

double Fridge::getVolume(){
    return volume;
};

double Fridge::getPowerConsumption(){
    double power_consumption = powerRating * 24 * (volume /100);
    return power_consumption;
};
