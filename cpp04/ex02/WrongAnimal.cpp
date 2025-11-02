#include "WrongAnimal.hpp"

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &b)
{
	this->_type = b._type;
	return (*this);
}
WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}
WrongAnimal::WrongAnimal() : _type("Default")
{
	std::cout << " WrongAnimal Default constuctor called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default destructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal Parametized constructor called" << std::endl;
}
void WrongAnimal::makeSound() const
{
	std::cout << "*Random WrongAnimal noise*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
