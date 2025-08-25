#include <iostream>

void binaryAddition(int number1[], int number2[], int length){
    
    int* finalSum = new int[length + 1]();

    int carry = 0;

    int count = 0;

    for (int i = 0; count < length; i++){
        int bit1 = number1[i];
        int bit2 = number2[i];
        
        if (bit1 == 0 && bit2 == 0 && carry == 0){
            finalSum[i] = 0;
            carry = 0;
        }
        else if (bit1 == 0 && bit2 == 0 && carry == 1)
        {
            finalSum[i] = 1;
            carry = 0;
        }
        else if (bit1 == 0 && bit2 == 1 && carry == 0)
        {
            finalSum[i] = 1;
            carry = 0;
        }
        else if (bit1 == 0 && bit2 == 1 && carry == 1)
        {
            finalSum[i] = 0;
            carry = 1;
        }
        else if (bit1 == 1 && bit2 == 0 && carry == 0)
        {
            finalSum[i] = 1;
            carry = 0;
        }
        else if (bit1 == 1 && bit2 == 0 && carry == 1)
        {
            finalSum[i] = 0;
            carry = 1;
        }
        else if (bit1 == 1 && bit2 == 1 && carry == 0)
        {
            finalSum[i] = 0;
            carry = 1;
        }
        else if (bit1 == 1 && bit2 == 1 && carry == 1)
        {
            finalSum[i] = 1;
            carry = 1;
        }
        
        count++;
    }

    if (carry) {
        finalSum[length] = carry;
    }

    std::cout << "Result: ";
    for (int i = length; i >= 0; i--) {
        std::cout << finalSum[i];
    }
    std::cout << std::endl;
    delete[] finalSum;
}

int main() {
    
    int number1[8] = {1,0,0,0,1,0,0,0};  
    int number2[8] = {0,1,1,1,0,0,0,0}; 
    int length = 8;
    
    binaryAddition(number1, number2, length);
    
    return 0;
}