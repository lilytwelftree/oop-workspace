// InvoiceTest.h

#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include <iomanip>
#include "Invoice.h"

class InvoiceTest {
private:
    int testCount;
    int passedTests;
    
    // Helper method to run individual tests
    void runTest(const std::string& testName, bool condition);

public:
    InvoiceTest();
    
    // Main method to run all tests
    void runTests();
    
    // Individual test methods
    void testConstructor();
    void testAddServiceCost();
    void testGetDollarsOwed();
    void testGetInvoiceId();
    void testMultipleServices();
    void testNegativeCosts();
    void testZeroCost();
    
    // Display final test results
    void displayResults();
};

#endif // INVOICETEST_H