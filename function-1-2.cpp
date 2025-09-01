#include <iostream>
#include "Person.h"

PersonList createPersonList(int n){
    // we are creating a struct by calling the scaffold and naming it lis
    PersonList list;

    // we are then changing the variable numpeople in the struct we created to n
    list.numPeople = n;

    // then for the group of people we are creating a bunch of persons so we call that struct
    list.people = new Person [n];

    // we create a person for the number of people 
    for (int i = 0; i < n; i++) {
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }

    //return the list. NO IDEA why this isnt ptr tho
    return list;
}