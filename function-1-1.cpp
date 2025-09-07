#include <iostream>
#include <vector>
#include <memory>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    vector<unique_ptr<Vehicle>> parkingLot;
    int numVehicles;
    
    cout << "Number of vehicles: ";
    cin >> numVehicles;
    
    for (int i = 0; i < numVehicles; i++) {
        string vehicleType;
        int vehicleId;
        
        cout << "Type: ";
        cin >> vehicleType;
        cout << "ID: ";
        cin >> vehicleId;
        
        if (vehicleType == "Car") {
            parkingLot.push_back(make_unique<Car>(vehicleId));
        }
        else if (vehicleType == "Bus") {
            parkingLot.push_back(make_unique<Bus>(vehicleId));
        }
        else if (vehicleType == "Motorbike") {
            parkingLot.push_back(make_unique<Motorbike>(vehicleId));
        }
    }
    
    for (const auto& vehicle : parkingLot) {
        cout << "ID " << vehicle->getId() << ": " << vehicle->getParkingDuration() << " seconds" << endl;
    }
    
    return 0;
}