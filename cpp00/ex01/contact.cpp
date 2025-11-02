/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xx <xx@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:03:23 by xx                #+#    #+#             */
/*   Updated: 2025/10/22 12:02:04 by xx               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_info(std::string info[5])
{
	int	i;

	const std::string pos[5] = {"First name", "Last name", "Nickname",
		"Phone number", "Darkest secret"};
	i = 0;
	while (i < 5)
	{
		while (info[i].empty())
		{
			std::cout << "Le champ ne peut pas être vide. Réessaie (" << pos[i] << ") : ";
			std::getline(std::cin, info[i]);
			if (std::cin.eof())
				break ;
		}
		switch (i)
		{
		case 0:
			_firstname = info[i];
			break ;
		case 1:
			_lastName = info[i];
			break ;
		case 2:
			_nickname = info[i];
			break ;
		case 3:
			_phoneNumber = info[i];
			break ;
		case 4:
			_darkestSecret = info[i];
			break ;
		}
		i++;
	}
}

void	print_champ(std::string str)
{
	if (str.length() >= 10)
		str = str.substr(0, 9) + ".";
	std::cout << std::setw(10) << str << "|";
};
void Contact::display_short(int index)
{
	std::cout << "|" << std::setw(10) << index << "|";
	print_champ(_firstname);
	print_champ(_lastName);
	print_champ(_nickname);
	std::cout << std::endl;
}
void Contact::display_full()
{
	std::cout << "First name: " << _firstname << "\n";
	std::cout << "Last name: " << _lastName << "\n";
	std::cout << "Nickname: " << _nickname << "\n";
	std::cout << "Phone number: " << _phoneNumber << "\n";
	std::cout << "Darkest secret: " << _darkestSecret << "\n";
}
