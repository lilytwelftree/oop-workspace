#include <iostream>

bool is_fanarray(int array[], int n);

int main() {
    int array[] = {1,2,3,2,1};
    int n = 5;
    bool result = is_fanarray(array, n); 

    if (result) {
        std::cout << "Is fan array" << std::endl;
    } else {
        std::cout << "Is not fan array" << std::endl;
    }

    return 0;
}