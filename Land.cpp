// Land.cpp (Skeleton)
#include <iostream>

#include "Land.h"

int Land::totalLands = 0;

Land::Land(const std::string& name, int cost, LandType t) : Card(name, cost) {
  // TODO: initialize landType
  // TODO: increment totalLands count
  totalLands ++;
  landType = t;
}

Land::Land(const Land& other) : Card(other.name, other.cost) {
  // TODO: copy other's landType
  // TODO: increment totalLands count
  landType = other.landType;
  totalLands ++;
}

Land::~Land() {
  // TODO: decrement totalLands count
  totalLands --;
}

std::string Land::getTypeNameString() const {
  switch(landType) {
    case LandType::FOREST: return "Forest";
    case LandType::MOUNTAIN: return "Mountain";
    case LandType::SWAMP: return "Swamp";
  }
  return "Unknown";
}

void Land::printInfo() const {
  // TODO: print land details in format:
  // "Land - <name> (Cost <cost>): <TypeName> land."

  std::cout << "Land - " << name << " (Cost " << cost << "): " << getTypeNameString() << " land. " << std::endl;
}

Land::LandType Land::getLandType() const {
  // TODO
  return landType;
}

int Land::getTotalLands() {
  // TODO
  return totalLands;
}
// clone() method creates a deep copy of the Landobject using the copy
// constructor
Card* Land::clone() const { return new Land(*this); }
// getType() method returns the Type for a Card object
Card::Type Land::getType() const { return Type::LAND; }