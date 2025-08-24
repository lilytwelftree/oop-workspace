#include <iostream>
#include <iomanip>

double sum_even(double array[], int n);

int main() {
    double numbers[] = {1.5, 2.0, 3.5, 4.0, 5.5, 6.0};
    int size = 6;
    
    double result = sum_even(numbers, size);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Sum of even positions: " << result << std::endl;

    double small[] = {10.0, 20.0, 30.0};
    double result2 = sum_even(small, 3);
    std::cout << "Sum of small array even positions: " << result2 << std::endl;
    
    return 0;
}