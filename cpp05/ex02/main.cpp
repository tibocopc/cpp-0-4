/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:11:45 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:50:20 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("Tibo", 1);
		Bureaucrat b("Le D", 70);

		std::cout << std::endl;

		std::cout << a << std::endl;
		std::cout << b << std::endl;

		std::cout << std::endl;

		PresidentialPardonForm presidential("presidential");
		RobotomyRequestForm robotomy("robotomy");
		ShrubberyCreationForm shruberry("shruberry");

		std::cout << std::endl;

		std::cout << presidential << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << shruberry << std::endl;

		std::cout << std::endl;
		std::cout << "Able to sign and execute" << std::endl;
		a.signForm(presidential);
		a.executeForm(presidential);
		a.signForm(robotomy);
		a.executeForm(robotomy);
		a.signForm(shruberry);
		a.executeForm(shruberry);
		std::cout << std::endl;
		std::cout << "Unable to sign and execute" << std::endl;
		b.signForm(presidential);
		b.executeForm(presidential);
		b.signForm(robotomy);
		b.executeForm(robotomy);
		b.signForm(shruberry);
		b.executeForm(shruberry);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}