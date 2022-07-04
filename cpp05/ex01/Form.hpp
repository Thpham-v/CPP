/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:33:06 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/03 18:44:37 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, int signedGrade, int execGrade);
		Form(Form const & src);
		virtual	~Form();
		Form &	operator=(Form const & rhs);
		
		std::string const	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		
		void				beSigned(Bureaucrat const & src);
		
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
		
	private:
		Form();
		std::string const	_name;
		bool				_signed;
		int	const			_signedGrade;
		int	const			_execGrade;
};

std::ostream &		operator<<(std::ostream & o, Form const & rhs);

#endif