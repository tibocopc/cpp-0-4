/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:53:27 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:53:28 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <exception>
#include <iostream>
#include <string>

class	Form;

class Bureaucrat
{
  private:
	const std::string _name;
	int _grade;

  public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &a);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &src);

	void signForm(Form &src);
	void incrementGrade();
	void decrementGrade();

	std::string getName(void) const;
	int getGrade(void) const;

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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &source);