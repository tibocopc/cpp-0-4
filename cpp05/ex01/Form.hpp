/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:39:22 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 17:02:38 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>

class	Bureaucrat;

class Form
{
  private:
	const std::string _name;
	bool _signed;
	const int _grade_to_sign;
	const int _grade_to_execute;

  public:
	Form();
	Form(const std::string name, const int grade_to_sign,
		const int grade_to_execute);
	Form(const Form &a);
	~Form();

	Form &operator=(const Form &src);

	void beSigned(Bureaucrat &src);
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
};

std::ostream &operator<<(std::ostream &os, const Form &source);