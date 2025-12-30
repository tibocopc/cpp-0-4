/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:11:45 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/12 17:12:43 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarconvert.hpp"
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "invalid number of argument" << std::endl;
		return (0);
	}
	else
		ScalarConverter::convert(av[1]);
	return (0);
}