#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include "Drawable.h"

class Shape : public Drawable {
public:
    virtual double area();
    void draw() const;
};

double Shape::area(){
    return 0.0;
};

void Shape::draw() const{
    std::cout << "Drawing a shape" << std::endl;
};

#endif