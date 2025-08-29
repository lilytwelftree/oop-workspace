#include <iostream>

// Function declarations (these would normally be in a header file)
int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    // Test case 1: Normal array
    int arr1[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int length1 = 8;
    std::cout << "Test 1 [3, 1, 4, 1, 5, 9, 2, 6]:" << std::endl;
    std::cout << "  Min: " << array_min(arr1, length1) << std::endl;  // Expected: 1
    std::cout << "  Max: " << array_max(arr1, length1) << std::endl;  // Expected: 9
    std::cout << "  Sum: " << sum_min_max(arr1, length1) << std::endl; // Expected: 10
    std::cout << std::endl;

    return 0;
}