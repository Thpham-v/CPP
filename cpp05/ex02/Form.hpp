/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:33:06 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/03 21:50:01 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, int signedGrade, int execGrade, std::string target);
		Form(Form const & src);
		virtual	~Form();
		Form &	operator=(Form const & rhs);
		
		std::string const	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		std::string const	getTarget() const;
		
		void				beSigned(Bureaucrat const & src);
		virtual bool		execute(Bureaucrat const & executor) const = 0;
		
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Grade is too high !");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Grade is too low !");
				}
		};
		
		class	UnsignedFormException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("This form is not signed !");
				}
		};
		
	protected:
		Form();
		std::string const	_name;
		bool				_signed;
		int	const			_signedGrade;
		int	const			_execGrade;
		std::string			_target;
};

std::ostream &		operator<<(std::ostream & o, Form const & rhs);

#endif