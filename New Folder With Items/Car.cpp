#include <iostream>
#include "Car.h"

Car::Car(): Vehicle(){
    weight = 0;
    maxSpeed = 180;
    fuelCapacity = 0;
    passengers = 0;
};

Car::Car(int w, int f, int p): Vehicle(){
    weight = w;
    fuelCapacity = f;
    passengers = p;
    maxSpeed = 180;
};

void Car::travel(int distance, int speed){
    numberOfTrips ++;
    float distanceInTens = distance /10;
    
    //check for speed
    if(speed <= 100){
        float fuelDecrease = distanceInTens * 0.3;
        fuelPercentage -= fuelDecrease;
    }else{
        float fuelDecrease = distanceInTens * 0.5;
        fuelPercentage -= fuelDecrease;
}

    // update for passenger count
    if(passengers >= 4){
        for(int i = 3; i<passengers ; i++){
            float passengerFuelImpact = distanceInTens * 0.05;
            fuelPercentage -= passengerFuelImpact;
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
