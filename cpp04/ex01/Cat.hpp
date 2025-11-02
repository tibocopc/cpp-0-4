#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
  private:
	Brain *_brain;

  public:
	Cat();
	~Cat();
	Cat(std::string name);
	Cat &operator=(const Cat &b);
	Cat(const Cat &a);

	void makeSound() const;
	Brain* getBrain() const;
};