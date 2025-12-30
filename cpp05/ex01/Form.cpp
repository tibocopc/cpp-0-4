/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:53:24 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:53:25 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _grade_to_sign(1), _grade_to_execute(1)
{
	std::cout << "default form constructor called" << std::endl;
}

Form::Form(const std::string name, const int grade_to_sign,
	const int grade_to_execute) : _name(name), _grade_to_sign(grade_to_sign),
	_grade_to_execute(grade_to_execute)
{
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
	else if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
	std::cout << "parametized form constructor called" << std::endl;
}
Form::~Form()
{
	std::cout << "default form destructor called" << std::endl;
}
Form &Form::operator=(const Form &src)
{
	this->_signed = src._signed;
	return (*this);
}
void Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > this->_grade_to_sign)
		throw GradeTooLowException();
	this->_signed = 1;
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("form Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("form Grade is too high!");
}

std::string Form::getName(void) const
{
	return (this->_name);
}
int Form::getSigned(void) const
{
	return (this->_signed);
}
int Form::getGradetoexecute(void) const
{
	return (this->_grade_to_execute);
}
int Form::getGradetosign(void) const
{
	return (this->_grade_to_sign);
}

std::ostream &operator<<(std::ostream &os, const Form &source)
{
	os << source.getName() << source.getSigned() << source.getGradetoexecute() << source.getGradetosign();
	return (os);
}

Form::Form(const Form &a) : _grade_to_execute(a._grade_to_execute), _grade_to_sign(a._grade_to_sign)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}
