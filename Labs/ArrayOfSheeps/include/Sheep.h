#ifndef SHEEP_H_
#define SHEEP_H_
#include <string>

class Sheep {
 private:
  std::string m_Name;
  unsigned int m_Age;
 public:
  Sheep();
  Sheep(const std::string &name, const unsigned int &age);
  ~Sheep();

  // Setters
  void setInitialValues(const std::string name, const unsigned int &age);
  void setName(const std::string &name);
  void setAge(const unsigned int &age);

  // Getters
  void getValues(std::string &name, unsigned int &age) const;
  std::string getName() const;
  unsigned int getAge() const;
};
#endif // SHEEP_H_