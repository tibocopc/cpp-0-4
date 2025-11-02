#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
  private:
	Brain *_brain;

  public:
	Dog();
	~Dog();
	Dog(std::string name);
	Dog &operator=(const Dog &b);
	Dog(const Dog &a);

	void makeSound() const;
	Brain* getBrain() const;
};