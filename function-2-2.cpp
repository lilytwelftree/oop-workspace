#include <iostream>

int max_element(int array[], int n){
    if (n < 1) {         
        return 0;          
    }
    
    int largest_num = array[0];           
    for (int i = 1; i < n; i++) {  
        if (largest_num < array[i]){
            largest_num = array[i];
        }
    }   

    return largest_num;
    
}