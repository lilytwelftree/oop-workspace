#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {

    // create an array of pointers
    Shape** arrayOfShapePtrs = new Shape* [4];

    // create some shapes!
    Triangle triag1 = Triangle(3,2);
    Rectangle rect1 = Rectangle(2,2);
    Circle circ1 = Circle(4);
    Circle circ2 = Circle(10);

    //store them in array
    arrayOfShapePtrs[0] = &triag1;
    arrayOfShapePtrs[1] = &rect1;
    arrayOfShapePtrs[2] = &circ1;
    arrayOfShapePtrs[3] = &circ2;

    // print the area and drawing info
    for(int i=0; i < 4; i++){
        arrayOfShapePtrs[i]->draw();
        cout << "The area is " << arrayOfShapePtrs[i]->area() << endl;
    }

    //delete
    delete [] arrayOfShapePtrs;

    return 0;
}