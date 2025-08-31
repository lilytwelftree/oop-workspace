#include <iostream>
using namespace std;

double* dynamicArray(int N, double M);
double arrayMax(double* array, int size);

int main() {
    int size = 5;
    double initValue = 7.5;
    
    double* myArray = dynamicArray(size, initValue);
    
    double maxValue = arrayMax(myArray, size);
    cout << "Maximum value: " << maxValue << endl;
    
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    
    delete[] myArray;
    
    return 0;
}