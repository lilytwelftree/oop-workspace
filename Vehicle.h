#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
private:
    std::time_t timeOfEntry;
    int id;

public:
    Vehicle(int vehicleId);
    int getId() const;
    virtual int getParkingDuration() const = 0;
    virtual ~Vehicle();

protected:
    std::time_t getTimeOfEntry() const;
};

#endif