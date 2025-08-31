#include <iostream>

void printArray(double* array_ptr, int size){
    for (int i=0; i < size; i++){
        std::cout << array_ptr[i];
    }
}