#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &a);
	ScavTrap &operator=(const ScavTrap &b);

	void attack(const std::string &target);
    void guardGate();
};