#include "GradeManager.h"

GradeManager::GradeManager() {
}

void GradeManager::addGrade(int grade) {
    grades.push_back(grade);
}

void GradeManager::removeAt(int index) {
    if (index >= 0 && index < grades.size()) {
        grades.erase(grades.begin() + index);
    }
}

void GradeManager::updateGrade(int index, int newGrade) {
    if (index >= 0 && index < grades.size()) {
        grades[index] = newGrade;
    }
}

int GradeManager::countOccurrences(int grade) {
    int count = 0;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] == grade) {
            count++;
        }
    }
    return count;
}

std::vector<int> GradeManager::findAllIndices(int grade) {
    std::vector<int> indices;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] == grade) {
            indices.push_back(i);
        }
    }
    return indices;
}

int GradeManager::countBelow(int threshold) {
    int count = 0;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] < threshold) {
            count++;
        }
    }
    return count;
}

int GradeManager::getSize() {
    return grades.size();
}

double GradeManager::getAverage() {
    if (grades.size() == 0) {
        return 0.0;
    }
    double sum = 0.0;
    for (int i = 0; i < grades.size(); i++) {
        sum += grades[i];
    }
    return sum / grades.size();
}

void GradeManager::clearGrades() {
    grades.clear();
}