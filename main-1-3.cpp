#include <iostream>

int num_count(int array[], int n, int number);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;
    int desired_number = 2;
    int result = num_count(numbers, size, desired_number); 
    std::cout << desired_number << " is  included in the array" << result << " times." >> std::endl;
    return 0;
}