#include <iostream>

bool is_descending(int array[], int n);

int main() {
    int array[] = {3,6,5,4,3,2,1};
    int n = 7;
    bool result = is_descending(array, n); 

    if (result) {
        std::cout << "Array is descending" << std::endl;
    } else {
        std::cout << "Array is not descending" << std::endl;
    }

    return 0;
}