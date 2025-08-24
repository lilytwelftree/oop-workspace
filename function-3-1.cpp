#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n){
    if (n < 1){
        return false;
    }

    int middle = round(n / 2);

    for (int i = 1; i < n; i++){
        if(i < middle){
            if (array[i] < array[i-1]){
                return false;
            }
        }else if (i == middle){
            continue;
        }else if(i > middle){
            if (array[i] > array[i-1]){
                return false;
            }
        }
    }

    return true;
}
    
