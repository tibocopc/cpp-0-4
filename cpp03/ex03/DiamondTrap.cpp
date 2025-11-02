#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("ClapTrap_default"), _name("default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap("ClapTrap"), _name(name)
{
	std::cout << "DiamondTrap parametized constructor called" << std::endl;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &a)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = a;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &b)
{
	this->_name = b._name;
	this->_hit_points = b._hit_points;
	this->_energy_points = b._energy_points;
	this->_attack_damage = b._attack_damage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name : " << this->_name << " ClapTrap name : " << ClapTrap::_name << std::endl;
}