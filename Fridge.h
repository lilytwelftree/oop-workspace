#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliances.h"

class Fridge : public Appliance {
    private:
    double volume ;

    public:
    Fridge();
    Fridge(double volume, int powerRating);
    void setVolume(double volume);
    double getVolume();
    virtual double getPowerConsumption();
};

#endif 