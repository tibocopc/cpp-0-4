#include "Animal.hpp"

Animal &Animal::operator=(const Animal &b)
{
	this->_type = b._type;
	return (*this);
}
Animal::Animal(const Animal &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}
Animal::Animal() : _type("Default")
{
	std::cout << " Animal Default constuctor called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal Default destructor called" << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal Parametized constructor called" << std::endl;
}
void Animal::makeSound() const
{
	std::cout << "*Random animal noise*" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}
