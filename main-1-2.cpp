#include <iostream>

int average_sum(int array[], int n);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};  
    int result = average_sum(numbers, 5); 
    std::cout << "Average: " << result << std::endl;
}