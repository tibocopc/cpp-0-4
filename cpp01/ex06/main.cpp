#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
        Harl Harl;

		Harl.complain(av[1]);
	}
}