#include <iostream>
#include "Appliances.h"

using namespace std;

int main(){

    // create some appliances

    Appliance toaster = Appliance();
    Appliance microwave = Appliance(20);

    // check if they are on
    toaster.get_isOn();

    //turn on
    microwave.turnOnn();
    cout << microwave.get_isOn() << endl;

    //see power
    cout <<  microwave.get_powerRating()<< endl;

    return 0;
}