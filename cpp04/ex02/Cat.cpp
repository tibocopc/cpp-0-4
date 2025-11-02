#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat() : Animal("Default")
{
	this->_brain = new Brain();
	std::cout << "Cat Default constuctor called" << std::endl;
}
Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Default destructor called" << std::endl;
}
Cat::Cat(std::string name) : Animal(name)
{
	this->_brain = new Brain();
	std::cout << "Cat Parametized constructor called" << std::endl;
}
void Cat::makeSound() const
{
	std::cout << "MIAW MIAW" << std::endl;
}
Cat &Cat::operator=(const Cat &b)
{
	if (this != &b)
	{
		this->_type = b._type;
		delete this->_brain;
		this->_brain = new Brain(*b._brain);
	}
	return (*this);
}
Cat::Cat(const Cat &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}

Brain *Cat::getBrain() const
{
	return (this->_brain);
}