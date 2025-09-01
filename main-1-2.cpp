#include <iostream>
#include "Person.h"

int main(){

    PersonList testlist = createPersonList(3);
    
    std::cout << "Name: " << testlist.people[0].name << ", Age: " << testlist.people[0].age << std::endl;

    delete[] testlist.people;

    return 0;
}