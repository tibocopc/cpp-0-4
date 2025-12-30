/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:53:29 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:53:30 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "default bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	std::cout << "parametized bureaucrat constructor called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "default destructor called" << std::endl;
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

void Bureaucrat::signForm(Form &src)
{
	try
	{
		src.beSigned(*this);
		std::cout << this->_name << " signed " << src.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << this->_name << " couldn’t signed " << src.getName() << " because " << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}