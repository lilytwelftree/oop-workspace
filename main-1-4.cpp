#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int secondarray[] = {1, 2, 3, 4, 5};
    int size = 5;
    int result = sum_two_arrays(array, secondarray, size); 
    std::cout << "The sum of both arrays is" << result << std::endl;
    return 0;
}