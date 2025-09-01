#include <string>
#include <iostream>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

Person* createPersonArray(int n);
PersonList createPersonList(int n);

PersonList deepCopyPersonList(PersonList pl);