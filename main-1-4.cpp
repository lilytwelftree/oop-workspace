#include <iostream>

double arrayMax(double* array, int size);

int main(){
    double array[] ={1.0,2.0,3.0,4.0};
    double *array_ptr = array; 
    int size = 4;

    double result = arrayMax(array_ptr, size);

    // std:: cout << result << std::endl;

    return 0;
}