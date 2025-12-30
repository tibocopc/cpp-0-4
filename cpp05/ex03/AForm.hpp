/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:39:22 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:27:14 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>

class	Bureaucrat;

class AForm
{
  private:
	const std::string _name;
	bool _signed;
	const int _grade_to_sign;
	const int _grade_to_execute;

  public:
	AForm();
	AForm(const AForm &a);
	AForm(const std::string name, const int grade_to_sign,
		const int grade_to_execute);
	virtual ~AForm();

	AForm &operator=(const AForm &src);

	virtual void beSigned(Bureaucrat &src);
	virtual void execute(Bureaucrat const &executor) const = 0;

	std::string getName(void) const;
	int getSigned(void) const;
	int getGradetoexecute(void) const;
	int getGradetosign(void) const;

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

	class FormNotSigned : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &source);