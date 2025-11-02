
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal *a;

	(void)a;
	Cat cat;
	std::cout << std::endl;
	cat.getBrain()->setIdeas("idee1");
	return (0);
}