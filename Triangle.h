#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "Shape.h"

class Triangle : public Shape {
    private:
    int base;
    int height;

    public:
    Triangle();
    Triangle(int base, int height);
    double area();
    void draw() const;
};

Triangle::Triangle(){
    base = 0;
    height = 0;
};

Triangle::Triangle(int base, int height): base(base), height(height){};


void Triangle::draw() const{
    std::cout << "Drawing a triangle" << std::endl;
};

double Triangle::area(){
    double triangle_area = (base * height) / 2;
    return triangle_area;
};

#endif

