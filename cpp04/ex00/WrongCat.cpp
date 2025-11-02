#include "WrongCat.hpp"
#include <iostream>
#include <string>

WrongCat::WrongCat() : WrongAnimal("Default")
{
	std::cout << "WrongCat Default constuctor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default destructor called" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	std::cout << "WrongCat Parametized constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong noise" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &b)
{
	this->_type = b._type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}