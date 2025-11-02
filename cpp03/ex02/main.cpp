#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap frag("tiboo");
	std::cout << std::endl;

	std::cout << frag << std::endl;
	std::cout << std::endl;
	frag.highFivesGuys();
	frag.attack("tieuntigre");
	std::cout << std::endl;
}