#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
  protected:
	std::string _type;

  public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal &operator=(const WrongAnimal &b);
	WrongAnimal(const WrongAnimal &a);

	void makeSound() const;
	std::string getType() const;
};