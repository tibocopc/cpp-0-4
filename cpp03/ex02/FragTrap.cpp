#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap parametized constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}
FragTrap::FragTrap(const FragTrap &a)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = a;
}
FragTrap &FragTrap::operator=(const FragTrap &b)
{
	this->_name = b._name;
	this->_hit_points = b._hit_points;
	this->_energy_points = b._energy_points;
	this->_attack_damage = b._attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "high-five accepted" << std::endl;
}
