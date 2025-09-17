#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main(){
    //enter how many vehicles
    cout << "How many vehicles do you want to park: ";
    int parkNumber;
    cin >> parkNumber;
    cout << endl;

    //array of pointers
    Vehicle** parkedVehicles = new Vehicle*[parkNumber];

    // get vehicle type
    for(int i = 0; i < parkNumber; i++){
        string vehicleType;
        cout << "Enter vehicle type for vehicle " << i << ":" ;
        cin >> vehicleType;

        if (vehicleType == "Car"){
            Car newCar = Car();
            parkedVehicles[i] = &newCar;
        }else if (vehicleType == "Bus"){
            Bus newBus = Bus();
            parkedVehicles[i] = &newBus;
        }else if( vehicleType == "Motorbike"){
            Motorbike newMotorbike = Motorbike();
            parkedVehicles[i] = &newMotorbike;
        }else{
            cout << "That is not a vehicle type, try again" << endl;
        }
    }

    // print how long each has parked
    cout << "The vehicles have been parked for ";
    for(int i = 0; i < parkNumber; i++){
        cout << parkedVehicles[i]->getParkingDuration() << "seconds" << endl;
    }

    // release the memory
    delete [] parkedVehicles;

    return 0;
}