#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

class Appliance {
    protected:
    int powerRating;
    bool isOn;

    public:
    Appliance();
    Appliance(int powerRating);
    void turnOf();
    void turnOnn();
    double getPowerConsumption();
    int get_powerRating();
    void set_powerRating(int updatePower);
    bool get_isOn();
    void set_isOn(bool updateOn);
};

#endif 

