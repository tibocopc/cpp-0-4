#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
  private:
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;

  public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &a);
	ClapTrap &operator=(const ClapTrap &b);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    std::string getName() const;
    unsigned int getHitPoints() const ;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &clap);
