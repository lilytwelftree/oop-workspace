#include <iostream>

int count_evens(int number);

int main() {
    int number = 20;
    int result = count_evens(number); 
    std::cout << "There are " << result << " even numbers between 1 and " << number << std::endl;
    return 0;
}