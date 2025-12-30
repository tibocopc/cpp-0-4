/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarconvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:47:32 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/12 18:21:04 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarconvert.hpp"

void	handle_case(std::string convert)
{
	if (convert == "nan" || convert == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}
	if (convert == "+inff" || convert == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
	}
	if (convert == "-inff" || convert == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
}

void ScalarConverter::convert(std::string convert)
{
	double	conv;
	size_t	i;
	int		j;
	int		w;
	int		v;

	v = 0;
	w = 0;
	j = 0;
	i = 1;
	while (i < convert.length())
	{
		if (isalpha(convert[i]) && convert[i] != 'f')
			w++;
		if (convert[i] == 'f')
			j++;
		if (convert[1] == 'f' || convert[2] == 'f')
			w++;
		if (convert[i] == '-')
			v++;
		i++;
	}
	if (convert.empty())
	{
		std::cout << "error: line cannot be empty" << std::endl;
		return ;
	}
	if (convert == "nan" || convert == "nanf" || convert == "+inf"
		|| convert == "-inf" || convert == "+inff" || convert == "-inff")
	{
		handle_case(convert);
		return ;
	}
	if ((convert.length() > 1 && (!isdigit(convert[0]) && convert[0] != '-'))
		|| w >= 1 || j >= 2 || v >= 1)
	{
		std::cout << "error: invalid argument" << std::endl;
		return ;
	}
	conv = atof(convert.c_str());
	if (conv == 0 && isalpha(convert[0]))
		conv = convert[0];
	if (conv >= 32 && conv <= 126)
	{
		std::cout << "char: " << static_cast<char>(conv) << std::endl;
	}
	else if ((conv < 32 && conv >= 0) || (conv >= 127 && conv <= 256))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: ";
	if (conv > INT_MAX || conv < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(conv) << std::endl;
	std::cout << "float: ";
	if (conv == static_cast<int>(conv))
		std::cout << conv << ".0f" << std::endl;
	else
		std::cout << conv << "f" << std::endl;
	std::cout << "double: ";
	if (conv == static_cast<int>(conv))
		std::cout << static_cast<double>(conv) << ".0" << std::endl;
	else
		std::cout << static_cast<double>(conv) << std::endl;
}

ScalarConverter::ScalarConverter(void)
{
}
ScalarConverter::ScalarConverter(const ScalarConverter &ScalarConverter)
{
	*this = ScalarConverter;
}
ScalarConverter::~ScalarConverter()
{
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &conv)
{
	(void)conv;
	return (*this);
}