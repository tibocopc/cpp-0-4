/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:36:47 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/12 18:51:13 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <climits>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <stdint.h>

typedef struct Data
{
	int n;
	std::string str;
} Data;


class Serializer
{
  private:
	Serializer();
	Serializer(const Serializer &Serializer);
	~Serializer();
	Serializer &operator=(const Serializer &conv);

  public:
	static uintptr_t serialize(Data *ptr);
	static Data* deserialize(uintptr_t raw);
};