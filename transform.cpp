#include <iostream>

void covertBaseTwo(int saveRemainders[], int numberToConvert){
    int count = 0;

    while (numberToConvert > 0){
        int remainder = numberToConvert % 2;
        saveRemainders[count] = remainder;
        count ++;
        numberToConvert = numberToConvert/2;
    }

    for(int i = count - 1; i >= 0; i--){
        std::cout << saveRemainders[i];
    }

    std::cout << std::endl;
}

int main() {
    int numberToConvert = 75; 
    int saveRemainders[64] = {};

    covertBaseTwo(saveRemainders,numberToConvert);

    return 0;
}