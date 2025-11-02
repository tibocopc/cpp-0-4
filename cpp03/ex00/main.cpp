#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("tiboo");

	std::cout << clap << std::endl;
	std::cout << std::endl;
	clap.beRepaired(10);
	clap.takeDamage(5);
	clap.attack("tigrou");
	clap.beRepaired(10);
	clap.takeDamage(100);
	clap.beRepaired(10);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		clap.attack("tigre");
	std::cout << clap << std::endl;
	ClapTrap clap2(clap);
	std::cout << clap2<< std::endl;
}