#include "RecordManager.h"

int RecordManager::nextStudentID = 10001;
int RecordManager::totalRecordsCreated = 0;

RecordManager::RecordManager() {
}

int RecordManager::generateNextID() {
    totalRecordsCreated++;
    return nextStudentID++;
}

int RecordManager::addRecord(int grade) {
    int newID = generateNextID();
    records.push_back(std::make_pair(newID, grade));
    return newID;
}

void RecordManager::removeRecord(int studentID) {
    for (int i = 0; i < records.size(); i++) {
        if (records[i].first == studentID) {
            records.erase(records.begin() + i);
            return;
        }
    }
}

bool RecordManager::updateGrade(int studentID, int newGrade) {
    for (int i = 0; i < records.size(); i++) {
        if (records[i].first == studentID) {
            records[i].second = newGrade;
            return true;
        }
    }
    return false;
}

int RecordManager::getGrade(int studentID) {
    for (int i = 0; i < records.size(); i++) {
        if (records[i].first == studentID) {
            return records[i].second;
        }
    }
    return -1;
}

std::vector<int> RecordManager::findRecordsByGrade(int grade) {
    std::vector<int> studentIDs;
    for (int i = 0; i < records.size(); i++) {
        if (records[i].second == grade) {
            studentIDs.push_back(records[i].first);
        }
    }
    return studentIDs;
}

int RecordManager::countRecordsBelow(int threshold) {
    int count = 0;
    for (int i = 0; i < records.size(); i++) {
        if (records[i].second < threshold) {
            count++;
        }
    }
    return count;
}

std::pair<int, int> RecordManager::getRecord(int studentID) {
    for (int i = 0; i < records.size(); i++) {
        if (records[i].first == studentID) {
            return records[i];
        }
    }
    return std::make_pair(-1, -1);
}

std::vector<std::pair<int, int>> RecordManager::getRecordsAbove(int threshold) {
    std::vector<std::pair<int, int>> result;
    for (int i = 0; i < records.size(); i++) {
        if (records[i].second > threshold) {
            result.push_back(records[i]);
        }
    }
    return result;
}

int RecordManager::getSize() {
    return records.size();
}

double RecordManager::getAverage() {
    if (records.size() == 0) {
        return 0.0;
    }
    double sum = 0.0;
    for (int i = 0; i < records.size(); i++) {
        sum += records[i].second;
    }
    return sum / records.size();
}

void RecordManager::clearAllRecords() {
    records.clear();
}

int RecordManager::getTotalRecordsCreated() {
    return totalRecordsCreated;
}

int RecordManager::getNextStudentID() {
    return nextStudentID;
}