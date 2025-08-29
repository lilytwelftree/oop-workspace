#include <iostream>

bool is_palindrome( int integers[], int length);

int main() {

    int arr1[] = {1, 2, 2, 1};
    int length1 = 4;
    std::cout << "Test 1 [1, 2, 2, 1]: " << (is_palindrome(arr1, length1) ? "true" : "false") << std::endl;
    return 0;
}