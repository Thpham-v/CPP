/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:14:54 by thpham-v          #+#    #+#             */
/*   Updated: 2022/06/09 05:56:54 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	if (this->_grade > 150)
	{
		this->_grade = 150;
		throw Bureaucrat::GradeTooHighException();
	}
	if (this->_grade < 1)
	{
		this->_grade = 1;
		throw Bureaucrat::GradeTooLowException();
	}
}

