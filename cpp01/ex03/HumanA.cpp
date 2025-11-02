#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapontype) : _name(name)
{
	_weapon_type = &weapontype;
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon_type->getType() << std::endl;
}