#include "../include/Sheep.h"

// Constructors
Sheep::Sheep() : Sheep(kLong, kWhite) {}
Sheep::Sheep(const WoolType &woolType, const WoolColor &woolColor) 
    : m_WoolType(woolType), m_WoolColor(woolColor) {}
// Getters
WoolType Sheep::getWoolType() const { return m_WoolType; }
WoolColor Sheep::getWoolColor() const { return m_WoolColor; }
// Setters
void Sheep::setWoolType(const WoolType &woolType) { m_WoolType = woolType; }
void Sheep::setWoolColor(const WoolColor &woolColor) { m_WoolColor = woolColor; }
// Methods
void Sheep::print() const {
  std::cout << "THE SHEEP:\n\n";
  Animal::print();
  std::cout << std::setw(10) << "WOOLTYPE" << std::setw(5) << "COLOR\n";
  std::cout << std::setw(11) << "---------" << std::setw(5) << "---";
  std::cout << std::setw(10) << "--------" << std::setw(5) << "-----\n";
}