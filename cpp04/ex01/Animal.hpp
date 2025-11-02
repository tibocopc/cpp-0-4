#pragma once

#include <iostream>
#include <string>

class Animal
{
  protected:
	std::string _type;

  public:
	Animal();
	virtual ~Animal();
	Animal(std::string type);
	Animal &operator=(const Animal &b);
	Animal(const Animal &a);

	virtual void makeSound() const;
	std::string getType() const;
};