#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    // create a new list
    PersonList newList;

    //copy the number of people
    newList.numPeople = pl.numPeople;
    
    // make them the same rather than duplicate
    newList.people = pl.people; 
    
    return newList;
}