#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "default";
	std::cout << "default constructor called" << std::endl;
}

Brain::Brain(const Brain &b)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = b._ideas[i];
	std::cout << "copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "default destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &a)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = a._ideas[i];
	return (*this);
}

void Brain::setIdeas(const std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}
void Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}