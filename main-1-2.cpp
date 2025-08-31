#include <iostream>

void changeValue(double*);

int main (){
    double number = 11.00;
    double *number_ptr = &number;

    // std::cout << "number is currently " << number << std::endl;

    changeValue(number_ptr);

    // std::cout << "number is now " << number << std::endl;
    return 0;
}

// Can you explain how passing a pointer to a function can be used to modify the original variable value?
// It updates the original value without having to pass the variable between functions becuase we are updtaing the value the address 

// What would happen if we passed the double directly to the function rather than a pointer?
// It wouldnt update the value of the value of the double from anywhere outside the function. Becuase the function's return type is void, 
// the updated value would never make its way back to the main function.