#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
#include "Appliances.h"

class House {
    private:
    int currentNumAppliances;
    int numAppliances; //maximum
    Appliance** householdAppliances; // an array of pointers to various appliance object pointers

    public:
    House();
    House(int numAppliances);
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
};

#endif