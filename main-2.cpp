#include <iostream>
#include "GradeManager.h"

int main() {
    GradeManager manager;
    
    std::cout << "=== Grade Manager Test ===" << std::endl << std::endl;
    
    std::cout << "Test 1: Initial State" << std::endl;
    std::cout << "Size: " << manager.getSize() << std::endl;
    std::cout << "Average: " << manager.getAverage() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 2: Adding Grades" << std::endl;
    manager.addGrade(85);
    manager.addGrade(90);
    manager.addGrade(75);
    manager.addGrade(90);
    manager.addGrade(60);
    manager.addGrade(90);
    std::cout << "Added grades: 85, 90, 75, 90, 60, 90" << std::endl;
    std::cout << "Size: " << manager.getSize() << std::endl;
    std::cout << "Average: " << manager.getAverage() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 3: Count Occurrences" << std::endl;
    std::cout << "Number of 90s: " << manager.countOccurrences(90) << std::endl;
    std::cout << "Number of 85s: " << manager.countOccurrences(85) << std::endl;
    std::cout << "Number of 100s: " << manager.countOccurrences(100) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 4: Find All Indices" << std::endl;
    std::vector<int> indices = manager.findAllIndices(90);
    std::cout << "Indices of 90: ";
    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i];
        if (i < indices.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    
    indices = manager.findAllIndices(100);
    std::cout << "Indices of 100: ";
    if (indices.size() == 0) {
        std::cout << "none";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 5: Count Below Threshold" << std::endl;
    std::cout << "Grades below 80: " << manager.countBelow(80) << std::endl;
    std::cout << "Grades below 90: " << manager.countBelow(90) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 6: Update Grade" << std::endl;
    std::cout << "Before update - Average: " << manager.getAverage() << std::endl;
    manager.updateGrade(4, 95);
    std::cout << "Updated grade at index 4 from 60 to 95" << std::endl;
    std::cout << "After update - Average: " << manager.getAverage() << std::endl;
    manager.updateGrade(10, 100);
    std::cout << "Attempted to update invalid index 10" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 7: Remove Grade" << std::endl;
    std::cout << "Before removal - Size: " << manager.getSize() << std::endl;
    manager.removeAt(2);
    std::cout << "Removed grade at index 2 (was 75)" << std::endl;
    std::cout << "After removal - Size: " << manager.getSize() << std::endl;
    std::cout << "Average: " << manager.getAverage() << std::endl;
    manager.removeAt(10);
    std::cout << "Attempted to remove invalid index 10" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 8: Clear All Grades" << std::endl;
    manager.clearGrades();
    std::cout << "Cleared all grades" << std::endl;
    std::cout << "Size: " << manager.getSize() << std::endl;
    std::cout << "Average: " << manager.getAverage() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 9: Operations After Clear" << std::endl;
    manager.addGrade(100);
    manager.addGrade(95);
    manager.addGrade(88);
    std::cout << "Added new grades: 100, 95, 88" << std::endl;
    std::cout << "Size: " << manager.getSize() << std::endl;
    std::cout << "Average: " << manager.getAverage() << std::endl;
    std::cout << std::endl;
    
    std::cout << "=== All Tests Complete ===" << std::endl;
    
    return 0;
}