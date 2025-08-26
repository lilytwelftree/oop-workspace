#include <iostream>

void count_digits(int array[4][4]){

    int number_zeros = 0;
    int number_ones = 0;
    int number_twos = 0;
    int number_threes = 0;
    int number_fours = 0;
    int number_fives = 0;
    int number_sixes = 0;
    int number_sevens = 0;
    int number_eights = 0;
    int number_nines = 0;


    for (int i = 0; i<4; i++){
        for (int j = 0; j<4; j++){
            if (array[i][j] == 0){
                number_zeros ++;
            } else if (array[i][j] == 1){
                number_ones ++;
            } else if (array[i][j] == 2){
                number_twos ++;
            } else if (array[i][j] == 3){
                number_threes ++;
            } else if (array[i][j] == 4){
                number_fours ++;
            } else if (array[i][j] == 5){
                number_fives ++;
            } else if (array[i][j] == 6){
                number_sixes ++;
            } else if (array[i][j] == 7){
                number_sevens ++;
            } else if (array[i][j] == 8){
                number_eights ++;
            } else if (array[i][j] == 9){
                number_nines ++;
            }
        }
    }

    std::cout << "0:" << number_zeros << ";1:" << number_ones << ";2:" << number_twos << ";3:" << number_threes << ";4:" << number_fours << ";5:" << number_fives << ";6:" << number_sixes << ";7:" << number_sevens << ";8:" << number_eights << ";9:" << number_nines << std::endl;
    
}