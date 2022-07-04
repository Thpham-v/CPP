/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:33:08 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/03 21:54:15 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : _name("Undefined"), _signed(false), _signedGrade(150), _execGrade(150), _target("Undefined")
{
}

Form::Form(std::string const name, int signedGrade, int execGrade, std::string target) : _name(name), _signed(false), _signedGrade(signedGrade), _execGrade(execGrade), _target(target)
{
	if (this->_signedGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signedGrade > 150 || this->_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src._name), _signed(src._signed), _signedGrade(src._signedGrade), _execGrade(src._execGrade)
{
	if (this->_signedGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signedGrade > 150 || this->_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
		this->_target = rhs.getTarget();
	}
	return (*this);
}

std::string	const	Form::getName() const
{
	return(this->_name);
}

bool				Form::getSigned() const
{
	return(this->_signed);
}

int					Form::getSignGrade() const
{
	return(this->_signedGrade);
}

int					Form::getExecGrade() const
{
	return(this->_execGrade);
}

std::string	const	Form::getTarget() const
{
	return(this->_target);
}

void				Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->_signedGrade)
		throw	Form::GradeTooLowException();
	else if (this->_signed)
		std::cout << "Form " << this->_name << " is already signed." << std::endl;
	else
		this->_signed = true;
}

bool		Form::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false)
		throw Form::UnsignedFormException();
	if (executor.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	return (true);
}

std::ostream &		operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName();
	if (rhs.getSigned())
		o << " is signed.";
	else
		o << " is not signed."
		<< " (Grade required for signature: " << rhs.getSignGrade() << ".)"
		<< " (Grade required for execution: " << rhs.getExecGrade() << ".)";
	return (o);
}