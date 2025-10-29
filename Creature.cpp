// Creature.cpp (Skeleton)
#include <iostream>

#include "Creature.h"

int Creature::totalCreatures = 0;

Creature::Creature(const std::string& name, int cost, CreatureType t, int atk,
                   int def)
    : Card(name, cost) {
  // TODO: initialize type, attack, defense
  attack = atk;
  defense = def;
  totalCreatures ++;
  type = t;
}

Creature::Creature(const Creature& other) : Card(other.name, other.cost) {
  // TODO: copy other's type, attack, defense
    type = other.type;
    attack = other.attack;
    defense = other.defense;
  totalCreatures ++;
}

Creature::~Creature() {
  // TODO: decrement totalCreatures count
  totalCreatures --;
}

void Creature::printInfo() const {
  // TODO: print creature details in format:
  // "Creature - <name> (Cost <cost>): Creature Type=<typeName>,
  // Attack=<attack>, Defense=<defense>"
  std::cout << "Creature - " << name << " (Cost " << cost << "): "
            << "Creature Type=" << static_cast<int>(type) << ", "
            << "Attack=" << attack << ", "
            << "Defense=" << defense << std::endl;
}

int Creature::getAttack() const {
  return attack;
}

int Creature::getDefense() const {
 return defense;
}

Creature::CreatureType Creature::getCreatureType() const {
 return type;
}

int Creature::getTotalCreatures() {
  return totalCreatures;
}
// clone() method creates a deep copy of the Creature object using the copy
// constructor
Card* Creature::clone() const { return new Creature(*this); }
// getType() method reuturns the Type for a Card object
Card::Type Creature::getType() const { return Type::CREATURE; }