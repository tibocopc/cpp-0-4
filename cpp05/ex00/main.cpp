/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:11:45 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/08 17:37:27 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("doriane", 150);
		std::cout << a << std::endl;

		a.incrementGrade();
		std::cout << a << std::endl;
		Bureaucrat ab("dorianne", 155);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat b("tibo", 1);
		std::cout << b << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;

		Bureaucrat ab("dorianne", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
}