// UnitTest.h

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;
        
        // Test 1: Basic positive numbers
        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        } else {
            std::cout << "Test 1 passed: 1 + 2 = 3" << std::endl;
        }
        
        // Test 2: Adding zero
        if (addition.add(5, 0) != 5) {
            std::cout << "Test 2 failed!" << std::endl;
        } else {
            std::cout << "Test 2 passed: 5 + 0 = 5" << std::endl;
        }
        
        // Test 3: Adding negative numbers
        if (addition.add(-3, -7) != -10) {
            std::cout << "Test 3 failed!" << std::endl;
        } else {
            std::cout << "Test 3 passed: -3 + (-7) = -10" << std::endl;
        }
        
        // Test 4: Adding positive and negative numbers
        if (addition.add(10, -4) != 6) {
            std::cout << "Test 4 failed!" << std::endl;
        } else {
            std::cout << "Test 4 passed: 10 + (-4) = 6" << std::endl;
        }
        
        // Test 5: Large numbers
        if (addition.add(1000, 2000) != 3000) {
            std::cout << "Test 5 failed!" << std::endl;
        } else {
            std::cout << "Test 5 passed: 1000 + 2000 = 3000" << std::endl;
        }
    }
};