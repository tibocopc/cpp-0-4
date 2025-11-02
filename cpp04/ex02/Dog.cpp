#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog() : Animal("Default")
{
	this->_brain = new Brain();
	std::cout << "Dog Default constuctor called" << std::endl;
}
Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Default destructor called" << std::endl;
}
Dog::Dog(std::string name) : Animal(name)
{
	this->_brain = new Brain();
	std::cout << "Dog Parametized constructor called" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "WHOUFMATHISWOUF" << std::endl;
}

Dog &Dog::operator=(const Dog &b)
{
	if (this != &b)
	{
		this->_type = b._type;
		delete this->_brain;
		this->_brain = new Brain(*b._brain);
	}
	return (*this);
}
Dog::Dog(const Dog &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}
