// InvoiceTest.cpp

#include "InvoiceTest.h"
#include <cmath>

InvoiceTest::InvoiceTest() : testCount(0), passedTests(0) {
}

void InvoiceTest::runTest(const std::string& testName, bool condition) {
    testCount++;
    if (condition) {
        passedTests++;
        std::cout << "[PASS] " << testName << std::endl;
    } else {
        std::cout << "[FAIL] " << testName << std::endl;
    }
}

void InvoiceTest::runTests() {
    std::cout << "=== Running Invoice Unit Tests ===" << std::endl;
    std::cout << std::endl;
    
    testConstructor();
    testAddServiceCost();
    testGetDollarsOwed();
    testGetInvoiceId();
    testMultipleServices();
    testNegativeCosts();
    testZeroCost();
    
    std::cout << std::endl;
    displayResults();
}

void InvoiceTest::testConstructor() {
    std::cout << "Testing Constructor..." << std::endl;
    
    // Test constructor with positive ID
    Invoice invoice1(12345);
    runTest("Constructor initializes invoice ID correctly", 
            invoice1.getInvoiceId() == 12345);
    
    // Test constructor initializes dollars owed to 0
    runTest("Constructor initializes dollars owed to 0", 
            invoice1.getDollarsOwed() == 0.0);
    
    // Test constructor with different ID
    Invoice invoice2(99999);
    runTest("Constructor works with different ID", 
            invoice2.getInvoiceId() == 99999);
    
    std::cout << std::endl;
}

void InvoiceTest::testAddServiceCost() {
    std::cout << "Testing addServiceCost()..." << std::endl;
    
    Invoice invoice(1001);
    
    // Test adding positive cost
    invoice.addServiceCost(50.75);
    runTest("Add positive service cost", 
            std::abs(invoice.getDollarsOwed() - 50.75) < 0.001);
    
    // Test adding another positive cost
    invoice.addServiceCost(25.50);
    runTest("Add second positive service cost", 
            std::abs(invoice.getDollarsOwed() - 76.25) < 0.001);
    
    std::cout << std::endl;
}

void InvoiceTest::testGetDollarsOwed() {
    std::cout << "Testing getDollarsOwed()..." << std::endl;
    
    Invoice invoice(2001);
    
    // Test initial value
    runTest("Initial dollars owed is 0", 
            invoice.getDollarsOwed() == 0.0);
    
    // Test after adding costs
    invoice.addServiceCost(100.00);
    invoice.addServiceCost(50.25);
    runTest("Dollars owed after adding costs", 
            std::abs(invoice.getDollarsOwed() - 150.25) < 0.001);
    
    std::cout << std::endl;
}

void InvoiceTest::testGetInvoiceId() {
    std::cout << "Testing getInvoiceId()..." << std::endl;
    
    // Test with various invoice IDs
    Invoice invoice1(12345);
    runTest("Get invoice ID - Test 1", 
            invoice1.getInvoiceId() == 12345);
    
    Invoice invoice2(0);
    runTest("Get invoice ID - Test 2 (ID = 0)", 
            invoice2.getInvoiceId() == 0);
    
    Invoice invoice3(-5);
    runTest("Get invoice ID - Test 3 (negative ID)", 
            invoice3.getInvoiceId() == -5);
    
    std::cout << std::endl;
}

void InvoiceTest::testMultipleServices() {
    std::cout << "Testing multiple service additions..." << std::endl;
    
    Invoice invoice(3001);
    
    // Add multiple services
    invoice.addServiceCost(25.00);
    invoice.addServiceCost(30.50);
    invoice.addServiceCost(15.75);
    invoice.addServiceCost(100.00);
    
    double expectedTotal = 25.00 + 30.50 + 15.75 + 100.00;
    runTest("Multiple service costs accumulate correctly", 
            std::abs(invoice.getDollarsOwed() - expectedTotal) < 0.001);
    
    std::cout << std::endl;
}

void InvoiceTest::testNegativeCosts() {
    std::cout << "Testing negative cost handling..." << std::endl;
    
    Invoice invoice(4001);
    
    // Add positive cost first
    invoice.addServiceCost(50.00);
    
    // Try to add negative cost (should be rejected)
    invoice.addServiceCost(-25.00);
    runTest("Negative costs are rejected", 
            std::abs(invoice.getDollarsOwed() - 50.00) < 0.001);
    
    // Try adding another negative cost
    invoice.addServiceCost(-100.00);
    runTest("Multiple negative costs are rejected", 
            std::abs(invoice.getDollarsOwed() - 50.00) < 0.001);
    
    std::cout << std::endl;
}

void InvoiceTest::testZeroCost() {
    std::cout << "Testing zero cost handling..." << std::endl;
    
    Invoice invoice(5001);
    
    // Add positive cost first
    invoice.addServiceCost(25.00);
    
    // Try to add zero cost (should be rejected)
    invoice.addServiceCost(0.0);
    runTest("Zero costs are rejected", 
            std::abs(invoice.getDollarsOwed() - 25.00) < 0.001);
    
    std::cout << std::endl;
}

void InvoiceTest::displayResults() {
    std::cout << "=== Test Results ===" << std::endl;
    std::cout << "Tests run: " << testCount << std::endl;
    std::cout << "Tests passed: " << passedTests << std::endl;
    std::cout << "Tests failed: " << (testCount - passedTests) << std::endl;
    std::cout << "Success rate: " << std::fixed << std::setprecision(1) 
              << (static_cast<double>(passedTests) / testCount * 100) << "%" << std::endl;
    
    if (passedTests == testCount) {
        std::cout << "🎉 All tests passed!" << std::endl;
    } else {
        std::cout << "❌ Some tests failed. Please review the implementation." << std::endl;
    }
}