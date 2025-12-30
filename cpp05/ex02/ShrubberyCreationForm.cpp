/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:52:49 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:52:50 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",
	145, 137), _target("Default")
{
	std::cout << "default ShrubberyCreationForm consturctor called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "default ShrubberyCreationForm desturctor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = a;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm",
	145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Parametized constructor called" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	this->_target = src._target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &Bureaucrat) const
{
	if (!this->getSigned())
		throw AForm::FormNotSigned();
	if (Bureaucrat.getGrade() > this->getGradetoexecute())
		throw AForm::GradeTooLowException();
	std::ofstream ofs((this->_target + "_shrubbery").c_str());
	if (!ofs)
	{
		std::cerr << "Error: Could not open file " << this->_target
			+ "_shrubbery" << std::endl;
		return ;
	}
	ofs << "   /\\" << std::endl;
	ofs << "   /\\" << std::endl;
	ofs << "   /\\ " << std::endl;
	ofs << "  /  \\ " << std::endl;
	ofs << "   | " << std::endl;
	ofs << "   |" << std::endl;
	ofs.close();
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &source)
{
	os << "Target : " << source.getName() << " Is signed : " <<  source.getSigned() << " Grade to execute : " << source.getGradetoexecute() << " Grade to sign : " << source.getGradetosign();
	return (os);
}