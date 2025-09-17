#include <iostream>
#include "Vehicle.h"

using namespace std;

int main(){

    //create a Vehicle
    Vehicle myCar = Vehicle(20, 100);

    // see how much the car weighs
    cout << "What is the car weight? " << myCar.get_weight() << endl;

    // see my car's fuel percentage
    cout << "What is the fuel percentage? " << myCar.get_fuelPercentage() << endl;

    // have the car travel 50km at 40km/hr
    myCar.travel(50,40);
    cout << "How many trips has the car been on? " << myCar.get_numberOfTrips() << endl;
    cout << "After travelling 50km at 40km/hr, what is the fuel percentage? " << myCar.get_fuelPercentage() << "%" <<endl;

    // have it drive on another trip, far enough to no longer be operational
    myCar.travel(1500,100);
    cout << "How many trips has the car been on? " << myCar.get_numberOfTrips() << endl;
    cout << "After travelling 50km at 40km/hr, what is the fuel percentage? " << myCar.get_fuelPercentage() << "%" << endl;
    cout << "Is the car still operational? ";
    
    if(myCar.get_isOperational()){
        cout << "yes, the car is still operational" << endl;
    }else{
        cout << "no, the car has run out of fuel" << endl;
    }
    
    return 0;
}
