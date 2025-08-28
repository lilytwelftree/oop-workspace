#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[] = {1,0,1};
    int number_of_digits = 3;

    int result = binary_to_int(binary_digits, number_of_digits);
    std::cout << result << std::endl;  
    
    return 0;
}