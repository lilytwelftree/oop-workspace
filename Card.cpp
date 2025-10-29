#include <iostream>

#include "Card.h"

int Card::totalCards = 0;

Card::Card(const std::string& n, int c) : name(n), cost(c) {
  totalCards ++;
}

Card:: ~Card() {
}

std::string Card::getName() const {
  return this->name;
}

int Card::getCost() const {
  return this->cost;
}

int Card::getTotalCards() {
  return totalCards;
}
int main(){
    return 0;
}