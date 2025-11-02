#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void HumanB::attack(void)
{
	if (_weapon_type)
		std::cout << _name << " attacks with their " << _weapon_type->getType() << std::endl;
    else
        std::cout << _name << " is attacking with his bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon_type = &weapon;
}
