#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diamond("TiboLeTigre");
	std::cout << std::endl;
	std::cout << diamond << std::endl;
	diamond.attack("MathisLePongiste");
	diamond.whoAmI();
	std::cout << std::endl;
}