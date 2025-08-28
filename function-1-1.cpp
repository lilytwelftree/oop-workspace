#include <iostream>

int sum_diagonal(int array[4][4]){

    int diagonalSum = 0;

    for (int i = 0; i<4; i++){
        diagonalSum = diagonalSum + array[i][i];
    }

    // std::cout << diagonalSum << std::endl;

    return diagonalSum;
}