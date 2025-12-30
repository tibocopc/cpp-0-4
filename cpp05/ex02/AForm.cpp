/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:53:12 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:53:13 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _grade_to_sign(1), _grade_to_execute(1)
{
	std::cout << "default AForm constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int grade_to_sign,
	const int grade_to_execute) : _name(name), _grade_to_sign(grade_to_sign),
	_grade_to_execute(grade_to_execute)
{
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
	else if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
	std::cout << "parametized AForm constructor called" << std::endl;
}
AForm::~AForm()
{
	std::cout << "default AForm destructor called" << std::endl;
}
AForm &AForm::operator=(const AForm &src)
{
	this->_signed = src._signed;
	return (*this);
}
void AForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > this->_grade_to_sign)
		throw GradeTooLowException();
	this->_signed = 1;
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm Grade is too low!");
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("AForm Grade is too high!");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("AForm is not signed");
}

std::string AForm::getName(void) const
{
	return (this->_name);
}
int AForm::getSigned(void) const
{
	return (this->_signed);
}
int AForm::getGradetoexecute(void) const
{
	return (this->_grade_to_execute);
}
int AForm::getGradetosign(void) const
{
	return (this->_grade_to_sign);
}

std::ostream &operator<<(std::ostream &os, const AForm &source)
{
	os << source.getName() << source.getSigned() << source.getGradetoexecute() << source.getGradetosign();
	return (os);
}

AForm::AForm(const AForm &a) : _grade_to_sign(a._grade_to_sign),
	_grade_to_execute(a._grade_to_execute)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}