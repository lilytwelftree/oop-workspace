#include <iostream>
#include "Person.h"

int main(){
    //create original list
    PersonList original;
    original.numPeople = 3;
    original.people = new Person[3];

    for (int i = 0; i < original.numPeople; i++) {
        original.people[i].name = "John Doe";
        original.people[i].age = 0;
    }
    
    //create copy list
    PersonList copy = deepCopyPersonList(original);

    std::cout << "Name: " << copy.people[2].name << ", Age: " << copy.people[2].age << std::endl;

    delete[] original.people;
    delete[] copy.people;

    return 0;
}