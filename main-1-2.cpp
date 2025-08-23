#include <iostream>
#include <iomanip>

double average_sum(int array[], int n);

int main() {
    int numbers[] = {1, 2, 3, 4, 7};
    int n = 5;
    double result = average_sum(numbers,n); 
    std::cout << std::fixed << std::setprecision(1) << "Average: " << result << std::endl;
}