/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:11:45 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/12 18:49:38 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Data *data;

	data = new Data();

	data->n = 0;
	data->str = "tibo";

	std::cout << &data << std::endl;

	uintptr_t serialized = Serializer::serialize(data);
	
	std::cout << serialized << std::endl;
	Serializer::deserialize(serialized)->n = 5;
	std::cout << data->n << std::endl;
	
	return (0);
}