#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav("tiboo");
	std::cout << std::endl;

	std::cout << scav << std::endl;
	std::cout << std::endl;
	scav.guardGate();
	scav.guardGate();
	scav.attack("tieuntigre");
	std::cout << std::endl;
}