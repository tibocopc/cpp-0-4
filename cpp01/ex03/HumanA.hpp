#pragma once

#include "Weapon.hpp"

class HumanA
{
  private:
	std::string _name;
	Weapon *_weapon_type;

  public:
	HumanA(std::string name, Weapon &weapontype);
	void attack();
};