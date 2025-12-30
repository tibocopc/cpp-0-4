/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:47:32 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/12 18:30:31 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base::~Base()
{
}

Base *Base::generate(void)
{
	int	random;

	random = 0;
	srand(time(NULL));
	random = std::rand() % 3 + 1;
	std::cout << "Random : " << random << std::endl;
	if (random == 1)
		return (new A());
	else if (random == 2)
		return (new B());
	else
		return (new C());
}
void Base::identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
	{
		std::cout << "TYPE A" << std::endl;
		return ;
	}
	else if (dynamic_cast<B *>(p) != NULL)
	{
		std::cout << "TYPE B" << std::endl;
		return ;
	}
	else if (dynamic_cast<C *>(p) != NULL)
	{
		std::cout << "TYPE C" << std::endl;
		return ;
	}
}
void Base::identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "TYPE A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "TYPE B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "TYPE C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	return ;
}