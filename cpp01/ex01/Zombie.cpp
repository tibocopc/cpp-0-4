#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie default constructor called" << std::endl;
	_name = "Default";
}

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie parametized constructor called" << std::endl;
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor called" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return (this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
