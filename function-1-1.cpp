#include <iostream>
#include "Person.h"

Person* createPersonArray(int n){
    return new Person[n];
};