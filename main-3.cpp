#include <iostream>
#include "RecordManager.h"

int main() {
    RecordManager manager;
    
    std::cout << "=== Record Manager Test ===" << std::endl << std::endl;
    
    std::cout << "Test 1: Initial State and Static Members" << std::endl;
    std::cout << "Size: " << manager.getSize() << std::endl;
    std::cout << "Next Student ID: " << RecordManager::getNextStudentID() << std::endl;
    std::cout << "Total Records Created: " << RecordManager::getTotalRecordsCreated() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 2: Adding Records" << std::endl;
    int id1 = manager.addRecord(85);
    int id2 = manager.addRecord(90);
    int id3 = manager.addRecord(75);
    int id4 = manager.addRecord(90);
    int id5 = manager.addRecord(60);
    std::cout << "Added 5 records with IDs: " << id1 << ", " << id2 << ", " << id3 << ", " << id4 << ", " << id5 << std::endl;
    std::cout << "Size: " << manager.getSize() << std::endl;
    std::cout << "Average: " << manager.getAverage() << std::endl;
    std::cout << "Next Student ID: " << RecordManager::getNextStudentID() << std::endl;
    std::cout << "Total Records Created: " << RecordManager::getTotalRecordsCreated() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 3: Get Grade" << std::endl;
    std::cout << "Student " << id1 << " grade: " << manager.getGrade(id1) << std::endl;
    std::cout << "Student " << id3 << " grade: " << manager.getGrade(id3) << std::endl;
    std::cout << "Student 99999 grade: " << manager.getGrade(99999) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 4: Get Record" << std::endl;
    std::pair<int, int> record = manager.getRecord(id2);
    std::cout << "Student " << id2 << " record: {" << record.first << ", " << record.second << "}" << std::endl;
    record = manager.getRecord(99999);
    std::cout << "Student 99999 record: {" << record.first << ", " << record.second << "}" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 5: Find Records by Grade" << std::endl;
    std::vector<int> students = manager.findRecordsByGrade(90);
    std::cout << "Students with grade 90: ";
    for (int i = 0; i < students.size(); i++) {
        std::cout << students[i];
        if (i < students.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    
    students = manager.findRecordsByGrade(100);
    std::cout << "Students with grade 100: ";
    if (students.size() == 0) {
        std::cout << "none";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 6: Count Records Below Threshold" << std::endl;
    std::cout << "Records below 80: " << manager.countRecordsBelow(80) << std::endl;
    std::cout << "Records below 90: " << manager.countRecordsBelow(90) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 7: Get Records Above Threshold" << std::endl;
    std::vector<std::pair<int, int>> highGrades = manager.getRecordsAbove(80);
    std::cout << "Records above 80: ";
    for (int i = 0; i < highGrades.size(); i++) {
        std::cout << "{" << highGrades[i].first << ", " << highGrades[i].second << "}";
        if (i < highGrades.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 8: Update Grade" << std::endl;
    std::cout << "Before: Student " << id5 << " grade = " << manager.getGrade(id5) << std::endl;
    bool updated = manager.updateGrade(id5, 95);
    std::cout << "Update result: " << (updated ? "success" : "failed") << std::endl;
    std::cout << "After: Student " << id5 << " grade = " << manager.getGrade(id5) << std::endl;
    std::cout << "Average: " << manager.getAverage() << std::endl;
    
    updated = manager.updateGrade(99999, 100);
    std::cout << "Update non-existent student: " << (updated ? "success" : "failed") << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 9: Remove Record" << std::endl;
    std::cout << "Before removal - Size: " << manager.getSize() << std::endl;
    manager.removeRecord(id3);
    std::cout << "Removed student " << id3 << std::endl;
    std::cout << "After removal - Size: " << manager.getSize() << std::endl;
    std::cout << "Student " << id3 << " grade: " << manager.getGrade(id3) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 10: Multiple RecordManager Instances (Static Persistence)" << std::endl;
    RecordManager manager2;
    std::cout << "Created second RecordManager" << std::endl;
    std::cout << "Manager2 size: " << manager2.getSize() << std::endl;
    int id6 = manager2.addRecord(88);
    int id7 = manager2.addRecord(92);
    std::cout << "Added records to manager2 with IDs: " << id6 << ", " << id7 << std::endl;
    std::cout << "Total Records Created (shared): " << RecordManager::getTotalRecordsCreated() << std::endl;
    std::cout << "Next Student ID (shared): " << RecordManager::getNextStudentID() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test 11: Clear All Records" << std::endl;
    manager.clearAllRecords();
    std::cout << "Cleared all records from manager" << std::endl;
    std::cout << "Size: " << manager.getSize() << std::endl;
    std::cout << "Average: " << manager.getAverage() << std::endl;
    std::cout << "Total Records Created (persists): " << RecordManager::getTotalRecordsCreated() << std::endl;
    std::cout << "Next Student ID (persists): " << RecordManager::getNextStudentID() << std::endl;
    std::cout << std::endl;
    
    std::cout << "=== All Tests Complete ===" << std::endl;
    
    return 0;
}