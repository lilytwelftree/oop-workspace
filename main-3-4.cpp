#include <iostream>

void print_pass_fail(char grade);

int main() {
    print_pass_fail('A');  //  "Pass"
    print_pass_fail('B');  // "Pass"  
    print_pass_fail('C');  // "Pass"
    print_pass_fail('D');  // "Fail"
    print_pass_fail('E');  //  "Fail"
    
    // Test invalid grade
    print_pass_fail('F');  // "Nothing"
    print_pass_fail('X');  //  "Nothing"
    
    return 0;
}