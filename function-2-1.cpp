#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    for(int i = 0; i < decimal_number.length(); i++) {
        int digit = decimal_number[i] - '0'; 
        
        if (digit % 2 == 0) {
            std::cout << "0";
        } else {
            std::cout << "1";
        }
    }
    std::cout << std::endl;
}