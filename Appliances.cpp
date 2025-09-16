#include <iostream>
#include "Appliances.h"

Appliance::Appliance(){
    powerRating = 0;
    isOn = false;
};

Appliance::Appliance(int powerRating)
    :powerRating(powerRating){
        isOn = false;
    };

void Appliance::turnOf(){
    isOn = false;
};

void Appliance::turnOnn(){
    isOn = true;
};

double Appliance::getPowerConsumption(){
    return 0;
};

int Appliance::get_powerRating(){
    return powerRating;
};

void Appliance::set_powerRating(int updatePower){
    powerRating = updatePower;
};

bool Appliance::get_isOn(){
    return isOn;
};

// void Appliance::set_isOn(bool updateOn){
//     isOn = updateOn;
// };
