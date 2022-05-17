#ifndef PIG_H_
#define PIG_H_
#include "Animal.h"

enum TailType { kStraight = 0, kCorkscrew, kCurlUp, kCurlRight, kCurlLeft };

class Pig : public Animal {
 public:
  Pig();
  Pig(const std::string &name, const unsigned int &age, const TailType &tailType);
  ~Pig() {}
  // Setters
  void setTailType(const TailType &tailType);
  // Getters
  TailType getTailType() const;
  // Methods
  void print() const;
 private:
  TailType m_TailType;
};

#endif // PIG_H_