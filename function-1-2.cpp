#include <iostream>

int is_identity(int array[10][10]){

    bool checkIdentity;

    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            if (i == j){
                if (array[i][j] != 1){
                    // std::cout << "Not an idenity matrix" << std::endl;
                    return 0;
                }
            } else if(array[i][j] != 0){
                // std::cout << "Not an idenity matrix" << std::endl;
                return 0;
            } else {
                continue;
            }
        }
    }

    // std::cout << "Yes, this is an idenity matrix" << std::endl;
    return 1;
}