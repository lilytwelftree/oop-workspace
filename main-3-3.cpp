#include <iostream>
#include <iomanip>

double weighted_average(int array[], int n);

int main() {
    int numbers[] = {1, 2, 1, 4, 1, 3};
    int size = 6;
    
    double result = weighted_average(numbers, size);
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Weighted average: " << result << std::endl;
    
    return 0;
}