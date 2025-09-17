#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

#include <iostream>

class Bus: public Vehicle {
    public:
    Bus();
    Bus(int ID);
    int getParkingDuration();
};



#endif