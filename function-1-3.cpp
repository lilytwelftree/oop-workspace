#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
    // create a new person list struct
    PersonList newList;

    //copy the count of how many people
    newList.numPeople = pl.numPeople;

    //create a new array of people by setting n to number of new people needed
    newList.people = new Person[pl.numPeople];

    //then for each person from original list, copy it to new list
    for (int i = 0; i < pl.numPeople; i++) {
        newList.people[i].age = pl.people[i].age;          
        newList.people[i].name = pl.people[i].name;  
    }
    
    return newList;
}