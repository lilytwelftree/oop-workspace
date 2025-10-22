#include <iostream>
#include "BrowserHistory.h"

int main() {
    BrowserHistory browser;
    
    std::cout << "=== Browser History Test ===" << std::endl << std::endl;
    
    // Test 1: Initial state
    std::cout << "Test 1: Initial State" << std::endl;
    std::cout << "Current page: " << browser.getCurrentPage() << std::endl;
    std::cout << "Can go back: " << (browser.canGoBack() ? "Yes" : "No") << std::endl;
    std::cout << "Back history size: " << browser.getBackHistorySize() << std::endl;
    std::cout << std::endl;
    
    // Test 2: Visit some pages
    std::cout << "Test 2: Visiting Pages" << std::endl;
    browser.visitPage("google.com");
    std::cout << "Visited google.com, current page: " << browser.getCurrentPage() << std::endl;
    
    browser.visitPage("facebook.com");
    std::cout << "Visited facebook.com, current page: " << browser.getCurrentPage() << std::endl;
    
    browser.visitPage("twitter.com");
    std::cout << "Visited twitter.com, current page: " << browser.getCurrentPage() << std::endl;
    
    std::cout << "Can go back: " << (browser.canGoBack() ? "Yes" : "No") << std::endl;
    std::cout << "Back history size: " << browser.getBackHistorySize() << std::endl;
    std::cout << std::endl;
    
    // Test 3: Go back through history
    std::cout << "Test 3: Going Back" << std::endl;
    browser.goBack();
    std::cout << "After going back, current page: " << browser.getCurrentPage() << std::endl;
    std::cout << "Back history size: " << browser.getBackHistorySize() << std::endl;
    
    browser.goBack();
    std::cout << "After going back again, current page: " << browser.getCurrentPage() << std::endl;
    std::cout << "Back history size: " << browser.getBackHistorySize() << std::endl;
    
    browser.goBack();
    std::cout << "After going back once more, current page: " << browser.getCurrentPage() << std::endl;
    std::cout << "Back history size: " << browser.getBackHistorySize() << std::endl;
    std::cout << std::endl;
    
    // Test 4: Try to go back when no history exists
    std::cout << "Test 4: Going Back with No History" << std::endl;
    std::cout << "Can go back: " << (browser.canGoBack() ? "Yes" : "No") << std::endl;
    browser.goBack();  // Should do nothing
    std::cout << "After trying to go back, current page: " << browser.getCurrentPage() << std::endl;
    std::cout << std::endl;
    
    // Test 5: Visit new pages after going back
    std::cout << "Test 5: Visiting New Pages After Going Back" << std::endl;
    browser.visitPage("youtube.com");
    std::cout << "Visited youtube.com, current page: " << browser.getCurrentPage() << std::endl;
    
    browser.visitPage("reddit.com");
    std::cout << "Visited reddit.com, current page: " << browser.getCurrentPage() << std::endl;
    std::cout << "Back history size: " << browser.getBackHistorySize() << std::endl;
    
    browser.goBack();
    std::cout << "After going back, current page: " << browser.getCurrentPage() << std::endl;
    std::cout << std::endl;
    
    std::cout << "=== All Tests Complete ===" << std::endl;
    
    return 0;
}