#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap parametized constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &a)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = a;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &b)
{
	this->_name = b._name;
	this->_hit_points = b._hit_points;
	this->_energy_points = b._energy_points;
	this->_attack_damage = b._attack_damage;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points != 0)
	{
		this->_energy_points--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target + ","
			+ " causing " << this->_attack_damage << " points of damage !" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " has no energy or hit points remaining" << std::endl;
}

void ScavTrap::guardGate(void)
{
	static bool	guardGateMode = false;

	if (!guardGateMode)
	{
		std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode." << std::endl;
        guardGateMode = true;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is already in gate keeper mode." << std::endl;
}
