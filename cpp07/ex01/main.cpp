/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:22:38 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/15 19:15:06 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>

void	incr(int &num)
{
	num++;
}

void	to_upper(char &c)
{
	c = std::toupper(static_cast<unsigned char>(c));
}

void	print_tab(int *tab, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << tab[i];
	std::cout << std::endl;
}

int	main(void)
{
	char str[] = "salut cest jhonny";
	int i[5] = {1, 2, 3, 4, 5};

	print_tab(i, 5);
	iter(i, 5, incr);
	print_tab(i, 5);

	std::cout << str << std::endl;
	iter(str, 17, to_upper);
	std::cout << str << std::endl;

	return (0);
}