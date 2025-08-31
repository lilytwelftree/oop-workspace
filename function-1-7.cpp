#include <iostream>
using namespace std;

double arrayMax(double* array, int size){
    double max = array[0];
    for (int i=1; i < size; i++){
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

double* dynamicArray(int N, double M) {
    double* array = new double[N];
    for (int i = 0; i < N; i++) {
        array[i] = M; 
    }
    return array;
}