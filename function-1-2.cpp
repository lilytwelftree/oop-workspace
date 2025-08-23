int average_sum(int array[], int n) {
    if (n < 1) {   
        double(n);        
        return 0.0;          
    }
    
    int sum = 0;           
    for (int i = 0; i < n; i++) {  
        sum += array[i];  
    }

    double average = sum / n;
    
    return average;   
}