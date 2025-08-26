#include <iostream>

void print_scaled(int array[3][3],int scale){

    for (int i = 0; i<3; i++){
        // std::cout << "First row ";
        for (int j = 0; j<3; j++){
            std:: cout << array[i][j] * scale << " ";
        }
        std::cout << "\n";
    }

}