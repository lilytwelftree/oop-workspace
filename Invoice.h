// Invoice.h

#ifndef INVOICE_H
#define INVOICE_H

class Invoice {
private:
    int invoiceId;
    double dollarsOwed;

public:
    // Constructor that initializes an invoice with a given invoice ID
    Invoice(int invoiceId);
    
    // Adds the cost of a service to the current invoice in dollars
    // Accepts only positive dollar amounts
    void addServiceCost(double costDollars);
    
    // Returns the total amount owed in dollars for the services on the invoice
    double getDollarsOwed() const;
    
    // Returns the unique identifier (ID) for the invoice
    int getInvoiceId() const;
};

#endif // INVOICE_H