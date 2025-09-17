#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
    protected:
    // int distance;
    // int speed;
    int weight;
    int fuelCapacity;
    float fuelPercentage;
    int numberOfTrips;
    bool isOperational;

    public:
    Vehicle();
    Vehicle(int weight, int fuelCapacity);

    int get_weight();
    float get_fuelPercentage();
    int get_fuelCapacity();
    int get_numberOfTrips();
    bool get_isOperational();

    int set_fuelCapacity(int fuelCapaity);
    int set_weight(int weight);
    float set_fuelPercentage(float fuelPercentage);
    int set_numberOfTrips(int numberOfTrips);
    bool set_isOperational(bool isOperational);
    // float set_fuelPercentage(float fuelPercentage);
    // int set_numberOfTrips(int numberOfTrips);
    // bool set_isOperational(bool isOperational);

    void refuel();
    virtual void travel(int distance, int speed);
};


#endif