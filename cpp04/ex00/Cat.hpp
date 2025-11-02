#pragma once

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
  public:
	Cat();
	~Cat();
	Cat(std::string name);
	Cat &operator=(const Cat &b);
	Cat(const Cat &a);

	void makeSound() const;
};