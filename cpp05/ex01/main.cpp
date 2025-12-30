/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:11:45 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/08 19:12:37 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("tibo", 25);
		Bureaucrat b("riane", 150);
		Bureaucrat c("do", 1);

		std::cout << std::endl;
		Form formulaire("contract de zouziz", 125, 1);
		std::cout << std::endl;
		a.signForm(formulaire);
		c.signForm(formulaire);
		b.signForm(formulaire);
		std::cout << std::endl;
		
		Form error("error", 155, 0);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}