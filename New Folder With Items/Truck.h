#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>

class Truck : public Vehicle{
    private:
    int cargoLoad;
    
    public:
    Truck();
    Truck(int w, int f, int c);
    int set_cargoLoad(int cargoLoad);
    int get_cargoLoad(int cargoLoad);
    void travel(int distance, int speed);

};

Truck::Truck(): Vehicle(){
    cargoLoad = 0;
};

int Truck::set_cargoLoad(int cargoLoad){
    this->cargoLoad = cargoLoad;
    return cargoLoad;
};

int Truck::get_cargoLoad(int cargoLoad){
    return cargoLoad;
};

Truck::Truck(int w, int f, int c): Vehicle(){
    
};


void Truck::travel(int cargoLoad, int distance){
    numberOfTrips ++;
    float distanceInTens = distance /10;
    
    //check for speed
    if(cargoLoad <= 2000){
        float fuelDecrease = distanceInTens * 0.8;
        fuelPercentage -= fuelDecrease;
    }else{
        float fuelDecrease = distanceInTens * 1;
        fuelPercentage -= fuelDecrease;
}

    // update for passenger count
    if(cargoLoad >= 2500){
        int cargoLoadinhundreds= cargoLoad/100;

        for(int i = 0; i<cargoLoadinhundreds ; i++){
            float LoadImpact = cargoLoadinhundreds * 0.002;
            fuelPercentage -= LoadImpact;
        }
    }

    // update operational
    if (fuelPercentage <= 0.10){
        isOperational = false;
    }
    else {
        isOperational = true;
    }
};


#endif
