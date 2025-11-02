/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xx <xx@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:14:31 by xx                #+#    #+#             */
/*   Updated: 2025/10/18 16:28:42 by xx               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class PhoneBook {
private:
    Contact _contacts[8];
    int _nb_contacts;
    int _oldest_index;
public:
    PhoneBook();
    void add_contact();
    void search_contact();
};

#endif