/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:11:45 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 19:45:16 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Intern someRandomIntern;
		AForm *rrf;
		AForm *rrf2;
		AForm *rrf3;
		Bureaucrat tib("tib", 1);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf2 = someRandomIntern.makeForm("shrubbery creation", "Fry");
		std::cout << std::endl;
		tib.signForm(*rrf);
		tib.signForm(*rrf2);
		tib.executeForm(*rrf);
		tib.executeForm(*rrf2);
		std::cout << std::endl;
		rrf3 = someRandomIntern.makeForm("fjlsdfslk", "Fry");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}