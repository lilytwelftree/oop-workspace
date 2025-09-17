#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <iostream>

class Car : public Vehicle{
    private:
    int passengers;
    int maxSpeed;

    public:
    Car();
    Car(int w, int f, int p);
    void travel(int distance, int speed);

};

#endif
