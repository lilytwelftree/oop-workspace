#include <iostream>

bool is_ascending(int array[], int n);

int main() {
    int array[] = {9,2,3,4,5,6,7};
    int n = 7;
    bool result = is_ascending(array, n); 

    if (result) {
        std::cout << "Array is ascending" << std::endl;
    } else {
        std::cout << "Array is not ascending" << std::endl;
    }

    return 0;
}