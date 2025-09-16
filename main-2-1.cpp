#include "Fridge.h"
#include <iostream>

using namespace std;

int main(){

    // create a fridge
    Fridge lily_fridge = Fridge(100.50, 5); 
    Fridge harriet_fridge = Fridge();

    // set its volume
    harriet_fridge.setVolume(78.56);
    harriet_fridge.set_powerRating(2);

    // get all details
    cout << "lily's fridge has a volume of " << lily_fridge.getVolume() << " and power consumption " << lily_fridge.getPowerConsumption() << " and  is currently " ;
    if (lily_fridge.get_isOn()){
        cout << " on." << endl;
    }else {
        cout << " off." << endl;
    }
    
    cout << "harriet's fridge has a volume of " << harriet_fridge.getVolume() << " and power consumption " << harriet_fridge.getPowerConsumption() << " and  is currently " ;
    if (harriet_fridge.get_isOn()){
        cout << " on." << endl;
    }else {
        cout << " off." << endl;
    }

    return 0;
}

