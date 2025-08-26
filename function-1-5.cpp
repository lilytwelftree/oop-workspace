#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]){
     int sum = 0;
    //  int final_matrix[3][3]= {{0,0,0}, {0,0,0}, {0,0,0}};

    for (int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++){
            sum += array1[i][j];
            sum += array2[i][j];

            // final_matrix[i][j] == sum;

            std::cout << sum << " ";
            sum = 0;
        }
        std::cout << "\n";
    }
}