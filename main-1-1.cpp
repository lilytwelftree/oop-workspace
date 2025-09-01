#include <iostream>
#include "Person.h"

int main(){
    int numberOfPeople = 5;
    
    Person* people = createPersonArray(numberOfPeople);

    // people[0].age = 25;
    // people[0].name= "Alice";

    std::cout << "Name: " << people[0].name << ", Age: " << people[0].age << std::endl;

    delete[] people;
    return 0;
}