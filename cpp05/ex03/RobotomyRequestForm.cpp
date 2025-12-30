/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:52:35 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/09 18:52:36 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72,
	45), _target("Default")
{
	std::cout << "default RobotomyRequestForm consturctor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "default RobotomyRequestForm desturctor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = a;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm",
	72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Parametized constructor called" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->_target = src._target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &Bureaucrat) const
{
	if (!this->getSigned())
		throw AForm::FormNotSigned();
	if (Bureaucrat.getGrade() > this->getGradetoexecute())
		throw AForm::GradeTooLowException();
	std::cout << "zouziz" << std::endl;
	srand(time(NULL));
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy of " << this->_target << " has failed." << std::endl;
}


std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &source)
{
	os << "Target : " << source.getName() << " Is signed : " <<  source.getSigned() << " Grade to execute : " << source.getGradetoexecute() << " Grade to sign : " << source.getGradetosign();
	return (os);
}