#include <iostream>
#include "TV.h"

using namespace std;

int main(){
    // create some TVs

    TV lily_tv = TV(50, 100);
    TV harriet_tv = TV();

    // give harroet a screen size
    harriet_tv.setScreenSize(40);

    //give harriet powerrating
    harriet_tv.set_powerRating(30);

    //checkout getPowerConsumption
    cout << "Harriet's TV has power consumption " << harriet_tv.getPowerConsumption() << endl;
    cout << "Lily's TV has power consumption " << lily_tv.getPowerConsumption() << endl;

    return 0;
}