#include <iostream>

int min_element(int array[], int n);

int main() {
    int array[] = {9,6,3,4,5};
    int n = 5;
    int result = min_element(array, n); 
    std::cout << "The smallest number is " << result << std::endl;
    return 0;
}