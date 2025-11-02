
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal *tab[6] = {new Cat, new Cat, new Cat, new Dog, new Dog,
		new Dog};
	for (int i = 0; i < 6; i++)
		delete tab[i];
	Cat cat;
	Cat cat2;
	std::cout << std::endl;
	cat.getBrain()->setIdeas("idee1");
	cat2.getBrain()->setIdeas("idee2");
	cat.getBrain()->printIdeas();
	cat = cat2;
	cat.getBrain()->printIdeas();
	std::cout << std::endl;
	return (0);
}