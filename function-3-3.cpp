#include <iostream>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }
    
    double total = 0.0;
    
    for (int i = 0; i < n; i++) {
        int current_element = array[i];
        
        int frequency = 0;
        for (int j = 0; j < n; j++) {
            if (array[j] == current_element) {
                frequency++;
            }
        }
        
        total += current_element * ((double)frequency / n);
    }
    
    return total;
}