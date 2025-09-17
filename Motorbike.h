#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"

#include <iostream>

class Motorbike: public Vehicle {
    public:
    Motorbike();
    Motorbike(int ID);
    int getParkingDuration();
};



#endif