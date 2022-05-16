#include "../include/Sheep.h"

// Constructors
Sheep::Sheep() : Sheep("", 0, kLong, kWhite) {}
Sheep::Sheep(const std::string &name, const unsigned int &age,
        const WoolType &woolType, const WoolColor &woolColor)
    : Animal::Animal(name, age), m_WoolType(woolType), m_WoolColor(woolColor) {}
// Getters
WoolType Sheep::getWoolType() const { return m_WoolType; }
WoolColor Sheep::getWoolColor() const { return m_WoolColor; }
// Setters
void Sheep::setWoolType(const WoolType &woolType) { m_WoolType = woolType; }
void Sheep::setWoolColor(const WoolColor &woolColor) { m_WoolColor = woolColor; }
// Methods
void Sheep::print() const {
  std::cout << std::left;
  std::cout << "THE SHEEP:\n\n";
  Animal::print();
  std::cout << std::setw(10) << "WOOLTYPE" << std::setw(5) << "COLOR\n";
  std::cout << std::setw(11) << "---------" << std::setw(5) << "---";
  std::cout << std::setw(10) << "--------" << std::setw(5) << "-----\n";
  std::cout << std::right;
}