#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    ParkingLot lot(10);
    
    while (true) {
        string vehicleType;
        int vehicleId;
        
        cout << "Type: ";
        cin >> vehicleType;
        cout << "ID: ";
        cin >> vehicleId;
        
        Vehicle* vehicle = nullptr;
        
        if (vehicleType == "Car" || vehicleType == "car") {
            vehicle = new Car(vehicleId);
        }
        else if (vehicleType == "Bus" || vehicleType == "bus") {
            vehicle = new Bus(vehicleId);
        }
        else if (vehicleType == "Motorbike" || vehicleType == "motorbike") {
            vehicle = new Motorbike(vehicleId);
        }
        
        if (vehicle != nullptr) {
            int oldCount = lot.getCount();
            lot.parkVehicle(vehicle);
            if (lot.getCount() == oldCount) {
                delete vehicle;
                break;
            }
        }
    }
    
    int unparkId;
    cout << "ID to unpark: ";
    cin >> unparkId;
    
    lot.unparkVehicle(unparkId);
    
    return 0;
}