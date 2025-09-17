#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(){
    numberOfTrips = 0;
    isOperational = true;
    fuelPercentage = 100;
    fuelCapacity = 50;
    weight = 1000;
};

Vehicle::Vehicle(int w, int f): weight(w), fuelCapacity(f){
    numberOfTrips = 0;
    isOperational = true;
    fuelPercentage = 100;
};

void Vehicle::refuel(){
    isOperational = true;
    fuelPercentage = 100;
};

void Vehicle::travel(int distance, int speed){
        numberOfTrips ++;
        float modDistanceTraveled = distance/10;
        std::cout << modDistanceTraveled << std:: endl;
        float decreasePercentage = modDistanceTraveled;

        fuelPercentage -= decreasePercentage;

        if (fuelPercentage <= 0.15){
            isOperational = false;
        }
        else {
            isOperational = true;
        }
        
};


int Vehicle::get_weight(){return weight;};
int Vehicle::get_fuelCapacity(){return fuelCapacity;};
float Vehicle::get_fuelPercentage(){return fuelPercentage;};
int Vehicle::get_numberOfTrips(){return numberOfTrips;};
bool Vehicle::get_isOperational(){return isOperational;};

int Vehicle::set_fuelCapacity(int fuelCapacity) {
    this->fuelCapacity = fuelCapacity;
    return fuelCapacity;
};

int Vehicle::set_weight(int weight) {
    this->weight = weight;
    return weight;
};

float Vehicle::set_fuelPercentage(float fuelPercentage) {
    this->fuelPercentage = fuelPercentage;
    return fuelPercentage;
};

int Vehicle::set_numberOfTrips(int numberOfTrips) {
    this->numberOfTrips = numberOfTrips;
    return numberOfTrips;
};

bool Vehicle::set_isOperational(bool isOperational) {
    this->isOperational = isOperational;
    return isOperational;
};


// int Vehicle::set_weight(int weight){
//     this->weight = weight;
// };
// float Vehicle::set_fuelPercentage(float fuelPercentage){
//     this->fuelPercentage = fuelPercentage;
// };
// int Vehicle::set_numberOfTrips(int numberOfTrips){
//     this->numberOfTrips = numberOfTrips;
// };
// bool Vehicle::set_isOperational(bool isOperational){
//     this->isOperational = isOperational;
// };