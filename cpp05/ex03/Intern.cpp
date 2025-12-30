/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:52:28 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 19:41:27 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "default constructor called" << std::endl;
}
Intern::~Intern()
{
	std::cout << "default destructor called" << std::endl;
}

Intern::Intern(Intern &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

static AForm	*makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm	*makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*makeShruberry(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	int	i;

	i = 0;
	std::string a[3] = {"presidential pardon", "robotomy request",
		"shrubbery creation"};
	while (i < 3)
	{
		if (a[i] == name)
			break ;
		i++;
	}
	switch (i)
	{
	case 0:
		return (makePresidential(target));
		break ;
	case 1:
		return (makeRobotomy(target));
		break ;
	case 2:
		return (makeShruberry(target));
		break ;
	default:
		throw FormDidNotExist();
	}
}

const char *Intern::FormDidNotExist::what() const throw()
{
	return ("This form does not exist");
}
