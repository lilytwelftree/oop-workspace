#include <iostream>
#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    vector<Vehicle*> parkingLot;
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
            parkingLot.push_back(new Car(vehicleId));
        }
        else if (vehicleType == "Bus") {
            parkingLot.push_back(new Bus(vehicleId));
        }
        else if (vehicleType == "Motorbike") {
            parkingLot.push_back(new Motorbike(vehicleId));
        }
    }
    
    for (int i = 0; i < parkingLot.size(); i++) {
        cout << "ID " << parkingLot[i]->getId() << ": " << parkingLot[i]->getParkingDuration() << " seconds" << endl;
    }
    
    for (int i = 0; i < parkingLot.size(); i++) {
        delete parkingLot[i];
    }
    
    return 0;
}