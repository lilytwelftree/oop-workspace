// main.cpp

#include "UnitTest.h"
#include "InvoiceTest.h"

int main() {
    UnitTest unitTest;
    unitTest.runTests();
    
    InvoiceTest invoiceTest;
    invoiceTest.runTests();
    
    return 0;
}