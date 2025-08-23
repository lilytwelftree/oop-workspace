#include <iostream>

int count_evens(int number){
    if (number < 1) {         
        return 0;          
    }
    
    int even_count = 0;           
    for (int i = 0; i < number; i++) {  
        if (i % 2 == 0){
            even_count ++ ;
        }    
    }   

    return even_count;
    
}