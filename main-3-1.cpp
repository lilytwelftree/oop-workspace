#include <iostream> 
#include "House.h"
#include "Fridge.h"
#include "TV.h"

using namespace std;

int main(){

    //create some appliances

    Fridge lily_fridge = Fridge(1000, 5);
    TV lily_tv = TV(4, 40);

    // create a house
    House lilys_house = House(2);

    //add appliances to house
    lilys_house.addAppliance(&lily_fridge);
    lilys_house.addAppliance(&lily_tv);

    //see what their power outage is individually
    cout << "lily's fridge has a power consumption of " << lily_fridge.getPowerConsumption() << endl;
    cout << "and lily's TV has a power consumption of " << lily_tv.getPowerConsumption() << endl;

    // check lily house power consuption
    cout << "all together, lily's house power consumption is " << lilys_house.getTotalPowerConsumption() << endl;


    // lets compare this house to harriet's house
    // create harriet some appliances

    Fridge h_insideFridge = Fridge(500,2);
    Fridge h_outsideFridge = Fridge(300,5);
    TV h_livingroomTV = TV(4, 30);
    TV h_bedroomTV = TV(5, 60);
    TV h_bathroomTV = TV(3, 10);

    // create a house for harriet 
    House harriet_house = House(4); // one less intentionally

    // add these applainces to harriet's house
    harriet_house.addAppliance(&h_insideFridge);
    harriet_house.addAppliance(&h_insideFridge);
    harriet_house.addAppliance(&h_insideFridge);
    harriet_house.addAppliance(&h_insideFridge);
    harriet_house.addAppliance(&h_insideFridge);

    return 0;
}