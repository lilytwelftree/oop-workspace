#include <iostream>

int median_array(int array[], int n);

int main() {
    int numbers[] = {3, 5, 2, 1, 4};
    int size = 5;
    
    int result = median_array(numbers, size);
    std::cout << "Median: " << result << std::endl;
    
    int even_numbers[] = {1, 2, 3, 4};
    int even_result = median_array(even_numbers, 4);
    std::cout << "Even array median: " << even_result << std::endl;
    
    return 0;
}