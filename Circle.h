#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "Shape.h"

class Circle : public Shape {
    private:
    int radius;

    public:
    Circle();
    Circle(int radius);
    double area();
    void draw() const;
};

Circle::Circle(){
    radius = 0;
};

void Circle::draw() const{
    std::cout << "Drawing a circle" << std::endl;
};


Circle::Circle(int radius): radius(radius){};

double Circle::area(){
    double circle_area = 3.14 * radius * radius;
    return circle_area;
};

#endif

