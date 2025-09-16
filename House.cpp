#include <iostream>
#include "House.h"

House::House(){
    numAppliances = 0;
    currentNumAppliances = 0;
    householdAppliances = nullptr;
};

House::House(int numAppliances) : numAppliances(numAppliances){
    currentNumAppliances = 0;
    householdAppliances = new Appliance*[numAppliances];
};

bool House::addAppliance(Appliance* appliance){
    if(currentNumAppliances >= numAppliances){
        return false;
    } else{
        householdAppliances[currentNumAppliances] = appliance;
        currentNumAppliances ++;
        return true;
    }
};

double House::getTotalPowerConsumption(){
    double totalPower = 0;

    for (int i = 0; i<numAppliances ; i++){
        double power = householdAppliances[i]->getPowerConsumption();
        totalPower += power;
    }
