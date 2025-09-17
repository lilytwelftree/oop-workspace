#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
    private:
    int length;
    int breadth;

    public:
    Rectangle();
    Rectangle(int length, int breadth);
    void draw() const;
    double area();
};

Rectangle::Rectangle(){
    length = 0;
    breadth = 0;
};

Rectangle::Rectangle(int length, int breadth) : length(length), breadth(breadth){};

void Rectangle::draw() const{
    std::cout << "Drawing a rectangle" << std::endl;
};


double Rectangle::area(){
    double rectangle_area = length * breadth;
    return rectangle_area;
};

#endif

