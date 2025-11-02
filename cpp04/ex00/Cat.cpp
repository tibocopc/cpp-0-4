#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat() : Animal("Default")
{
	std::cout << "Cat Default constuctor called" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Cat Default destructor called" << std::endl;
}
Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat Parametized constructor called" << std::endl;
}
void Cat::makeSound() const
{
	std::cout << "MIAW MIAW" << std::endl;
}
Cat &Cat::operator=(const Cat &b)
{
	this->_type = b._type;
	return (*this);
}
Cat::Cat(const Cat &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}