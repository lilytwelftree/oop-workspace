#include <iostream>

int array_sum(int array[], int n);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};  
    int result = array_sum(numbers, 5); 
    std::cout << "Sum: " << result << std::endl;
}