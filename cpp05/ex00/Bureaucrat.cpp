/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:53:32 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:53:33 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "parametized bureaucrat constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "default destructor called" << std::endl;
}
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "default constructor called" << std::endl;
}
void Bureaucrat::incrementGrade(void)
{
	if (_grade < 2)
		throw GradeTooHighException();
	this->_grade--;
}
void Bureaucrat::decrementGrade()
{
	if (_grade > 149)
		throw GradeTooLowException();
	this->_grade++;
}
std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}
int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("bureacrate Grade is too low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("bureacrate Grade is too high!");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &source)
{
	os << source.getName() << ", bureaucrat grade " << source.getGrade();
	return (os);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		this->_grade = src._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}