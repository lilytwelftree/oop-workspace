#include <iostream>

void printArray(double* array_ptr, int size);

int main(){
    double array[] ={1.0,2.0,3.0,4.0};
    double *array_ptr = array; // we make it equal the array not the location in memory bc arrays alreay have it built in
    int size = 4;

    printArray(array_ptr, size);

    return 0;
}

// How do you pass an array to a function in C++ and why is it done this way?
// (I think) We pass them with their 

// What does the size argument represent and why is it necessary?
// We need to know how many elemnts are in the array from the starting point. Arrays give us the location in memeory of the first unit but we need to know how many along until the array finishes.