#include <iostream>
#include "workshop.h"
using namespace std;

int main (){
    double number = 11.00;
    double *number_ptr = &number;

    // std::cout << "number is currently " << number << std::endl;

    changeValue(number_ptr);

    // std::cout << "number is now " << number << std::endl;

    double array[] ={1.0,2.0,3.0,4.0};
    double *array_ptr = array; // we make it equal the array not the location in memory bc arrays alreay have it built in
    int size = 4;

    printArray(array_ptr, size);

    double array[] ={1.0,2.0,3.0,4.0};
    double *array_ptr = array; 
    int size = 4;

    double result = arrayMax(array_ptr, size);

    // std:: cout << result << std::endl;

    int size = 5;
    double initValue = 7.5;
    
    double* myArray = dynamicArray(size, initValue);
    
    double maxValue = arrayMax(myArray, size);
    // cout << "Maximum value: " << maxValue << endl;
    
    // cout << "Array elements: ";
    // for (int i = 0; i < size; i++) {
    //     cout << myArray[i] << " ";
    // }
    // cout << endl;
    
    delete[] myArray;
    
    return 0;
}

// Can you explain how passing a pointer to a function can be used to modify the original variable value?
// It updates the original value without having to pass the variable between functions becuase we are updtaing the value the address 

// What would happen if we passed the double directly to the function rather than a pointer?
// It wouldnt update the value of the value of the double from anywhere outside the function. Becuase the function's return type is void, 
// the updated value would never make its way back to the main function.

// How do you pass an array to a function in C++ and why is it done this way?
// (I think) We pass them with their 

// What does the size argument represent and why is it necessary?
// We need to know how many elemnts are in the array from the starting point. Arrays give us the location in memeory of the first unit but we need to know how many along until the array finishes.

// Why does the function need to return a double, and not a pointer?
// because we dont care where in memory the max double is, we just want to know what it is. We dont need to access the element itself.
