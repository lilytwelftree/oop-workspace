// Invoice.cpp

#include "Invoice.h"

// Constructor that initializes an invoice with a given invoice ID
Invoice::Invoice(int invoiceId) : invoiceId(invoiceId), dollarsOwed(0.0) {
}

// Adds the cost of a service to the current invoice in dollars
// Accepts only positive dollar amounts
void Invoice::addServiceCost(double costDollars) {
    if (costDollars > 0.0) {
        dollarsOwed += costDollars;
    }
}

// Returns the total amount owed in dollars for the services on the invoice
double Invoice::getDollarsOwed() const {
    return dollarsOwed;
}

// Returns the unique identifier (ID) for the invoice
int Invoice::getInvoiceId() const {
    return invoiceId;
}