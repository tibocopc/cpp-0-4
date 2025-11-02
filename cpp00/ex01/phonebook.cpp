/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xx <xx@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:17:16 by xx                #+#    #+#             */
/*   Updated: 2025/10/21 11:44:01 by xx               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
    _nb_contacts = 0;
    _oldest_index = 0;
}

void PhoneBook::add_contact() {
    std::string info[5];
    bool is_valid_number = false;

    std::cout << "First name: ";
    std::getline(std::cin, info[0]);
    if (std::cin.eof())
        return ;
    std::cout << "Last name: ";
    std::getline(std::cin, info[1]);
    if (std::cin.eof())
        return ;
    std::cout << "Nickname: ";
    std::getline(std::cin, info[2]);
    if (std::cin.eof())
        return ;
    while (!is_valid_number)
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, info[3]);
        is_valid_number = true;
        if (std::cin.eof())
            return ;
        if (info[3].size() != 10){
            std::cout << "Phone number must have 10 digits" << std::endl;
            is_valid_number = false;
        }
        for (size_t i = 0; i < info[3].size(); i++)
            if (!std::isdigit(info[3][i]))
            {
                std::cout << "Number must contain only digits" << std::endl;
                is_valid_number = false;
                break ;
            }
    }
    std::cout << "Darkest secret: ";
    std::getline(std::cin, info[4]);
    if (std::cin.eof())
        return ;

    _contacts[_oldest_index].set_info(info);
    
    if (_nb_contacts < 8)
        _nb_contacts++;
    _oldest_index = (_oldest_index + 1) % 8;
}

void PhoneBook::search_contact() {
    if (_nb_contacts == 0) {
        std::cout << "Aucun contact enregistré.\n";
        return;
    }
    std::cout << "|-------------------------------------------|\n";
    std::cout << "|    Index |First Name| Last Name| Nickname |\n";
    std::cout << "|-------------------------------------------|\n";
    for (int i = 0; i < _nb_contacts; i++)
        _contacts[i].display_short(i + 1);
    std::string input;
    std::cout << "Entrez l'index du contact à afficher : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        return ;
    if (input.length() != 1 || !std::isdigit(input[0])) {
        std::cout << "Index invalide.\n";
        return;
    }
    int index = input[0] - '0';
    if (index < 1 || index > _nb_contacts) {
        std::cout << "Index hors limite.\n";
        return;
    }
    _contacts[index - 1].display_full();
}
