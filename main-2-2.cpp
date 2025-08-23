#include <iostream>

int max_element(int array[], int n);

int main() {
    int array[] = {9,6,3,14,5};
    int n = 5;
    int result = max_element(array, n); 
    std::cout << "The largest number is " << result << std::endl;
    return 0;
}