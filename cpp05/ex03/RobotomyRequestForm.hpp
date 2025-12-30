/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:52:37 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:52:38 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>

class	Bureaucrat;

class RobotomyRequestForm : public AForm
{
  private:
	std::string _target;

  public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &a);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

	void execute(Bureaucrat const &executor) const;

	std::string getTarget(void) const;

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &source);