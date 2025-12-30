/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:52:31 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:52:32 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",
	25, 5), _target("Default")
{
	std::cout << "default PresidentialPardonForm consturctor called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "default PresidentialPardonForm desturctor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = a;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm",
	25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Parametized constructor called" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	this->_target = src._target;
    return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &Bureaucrat) const
{
	if (!this->getSigned())
		throw AForm::FormNotSigned();
	if (Bureaucrat.getGrade() > this->getGradetoexecute())
		throw AForm::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &source)
{
	os << "Target : " << source.getName() << " Is signed : " <<  source.getSigned() << " Grade to execute : " << source.getGradetoexecute() << " Grade to sign : " << source.getGradetosign();
	return (os);
}