#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {
    ParkingLot lot(10);
    int carCount = 0, busCount = 0, motorbikeCount = 0;
    
    while (carCount < 5 || busCount < 3 || motorbikeCount < 2) {
        string vehicleType;
        int vehicleId;
        
        cout << "Type: ";
        cin >> vehicleType;
        cout << "ID: ";
        cin >> vehicleId;
        
        Vehicle* vehicle = nullptr;
        
        if ((vehicleType == "Car" || vehicleType == "car") && carCount < 5) {
            vehicle = new Car(vehicleId);
            lot.parkVehicle(vehicle);
            carCount++;
        }
        else if ((vehicleType == "Bus" || vehicleType == "bus") && busCount < 3) {
            vehicle = new Bus(vehicleId);
            lot.parkVehicle(vehicle);
            busCount++;
        }
        else if ((vehicleType == "Motorbike" || vehicleType == "motorbike") && motorbikeCount < 2) {
            vehicle = new Motorbike(vehicleId);
            lot.parkVehicle(vehicle);
            motorbikeCount++;
        }
        else {
            cout << "Invalid type or quota full for that type" << endl;
        }
    }
    
    int overstayingCount = lot.countOverstayingVehicles(15);
    cout << overstayingCount << endl;
    
    return 0;
}