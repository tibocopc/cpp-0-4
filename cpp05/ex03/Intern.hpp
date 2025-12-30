/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:52:26 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 19:36:15 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
  public:
	Intern();
	~Intern();
	Intern(Intern &a);
    
    Intern &operator=(const Intern &src);

	AForm *makeForm(std::string name, std::string target);
	class FormDidNotExist : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};
