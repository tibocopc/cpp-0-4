#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog() : Animal("Default")
{
	std::cout << "Dog Default constuctor called" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog Default destructor called" << std::endl;
}
Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Dog Parametized constructor called" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "WHOUFMATHISWOUF" << std::endl;
}

Dog &Dog::operator=(const Dog &b)
{
	this->_type = b._type;
	return (*this);
}
Dog::Dog(const Dog &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}