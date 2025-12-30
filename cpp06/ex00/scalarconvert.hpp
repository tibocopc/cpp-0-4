/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarconvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:36:47 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/12 18:04:20 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

class ScalarConverter
{
  private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &ScalarConverter);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &conv);

  public:
	static void convert(std::string convert);
};