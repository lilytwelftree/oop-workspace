#include <iostream>
#include <cmath> 

int binary_to_int(int binary_digits[], int number_of_digits){
    int sum = 0;
    int power = number_of_digits - 1;

    for (int i = 0; i < number_of_digits; i++){
        
        int add = binary_digits[i]*pow(2,(power));
        sum += add;
        power = power -1;

    }

    std::cout << sum;

    return sum;
}