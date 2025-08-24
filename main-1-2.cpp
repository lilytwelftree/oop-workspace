#include <iostream>
#include <iomanip>

double array_mean(int array[], int n);

int main() {
    int numbers[] = {1, 2, 3, 4, 7};
    int n = 5;
    double result = array_mean(numbers,n); 
    std::cout << std::fixed << std::setprecision(1) << "Average: " << result << std::endl;
}