/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xx <xx@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:01:03 by xx                #+#    #+#             */
/*   Updated: 2025/10/18 17:13:52 by xx               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

int main() {
    PhoneBook book;
    std::string command;

    while (true) {
        std::cout << "Entrez une commande (ADD, SEARCH, EXIT) : ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            break ;
        if (command == "ADD")
            book.add_contact();
        else if (command == "SEARCH")
            book.search_contact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Commande inconnue.\n";
    }
    return 0;
}

