#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    int num = std::stoi(decimal_number);
    
    if (num == 0) {
        std::cout << "0" << std::endl;
        return;
    }
    
    std::string binary = "";
    
    while (num > 0) {
        binary = (char)('0' + num % 2) + binary;
        num /= 2;
    }
    
    std::cout << binary << std::endl;
}