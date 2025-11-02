#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hit_points(10), _energy_points(10),
	_attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10),
	_energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap parametized constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = a;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &b)
{
	this->_name = b._name;
	this->_hit_points = b._hit_points;
	this->_energy_points = b._energy_points;
	this->_attack_damage = b._attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points != 0)
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target + ","
			+ " causing " << this->_attack_damage << " points of damage !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy or hit points remaining" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		if (amount > this->_hit_points)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage and now has " << this->_hit_points << " hit points left" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points != 0)
	{
        if (this->_hit_points == 10)
        {
            std::cout << "ClapTrap " << this->_name << " is already full hp" << std::endl;
            return ;
        }
        if (this->_hit_points + amount > 10)
        this->_hit_points = 10;
		else
        this->_hit_points += amount;
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " has recovered " << amount << " hit points and now has " << this->_hit_points << " hit points." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy or hit points remaining" << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}
unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}
unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clap)
{
    out << "Name : " << clap.getName() << std::endl;
    out << "Hit Points : " << clap.getHitPoints() << std::endl;
    out << "Energy Points : " << clap.getEnergyPoints() << std::endl;
    out << "Attack Damage : " << clap.getAttackDamage() << std::endl;
    return (out);
}