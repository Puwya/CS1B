#ifndef SHEEP_H_
#define SHEEP_H_
#include "Animal.h"

enum WoolType { kLong = 0, kMedium, kFine, kCarpet };
enum WoolColor { kWhite = 0, kBlack };

class Sheep : public Animal {
 public:
  Sheep();
  Sheep(const WoolType &woolType, const WoolColor &woolColor);
  ~Sheep() {}
  // Getters
  WoolType getWoolType() const;
  WoolColor getWoolColor() const;
  // Setters
  void setWoolType(const WoolType &woolType);
  void setWoolColor(const WoolColor &woolColor);
  // Methods
  virtual void print() const override;
 private:
  WoolType m_WoolType;
  WoolColor m_WoolColor;
};

#endif // SHEEP_H_