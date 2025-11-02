#pragma once

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	~WrongCat();
	WrongCat(std::string name);
	WrongCat &operator=(const WrongCat &b);
	WrongCat(const WrongCat &a);

	void makeSound() const;
};