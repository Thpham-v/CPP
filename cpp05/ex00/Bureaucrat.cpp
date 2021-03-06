/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:14:54 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/03 17:06:40 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade > 150)
	{
		this->_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	if (this->_grade < 1)
	{
		this->_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		// this->_name = rhs.getName();
		// _name can't be assigned (const)
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::string const &	Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::increaseGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void		Bureaucrat::decreaseGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}