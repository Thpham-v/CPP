/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:14:59 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/03 19:18:14 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int		_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat (const Bureaucrat & rhs);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &);

		std::string const &	getName() const;
		int		getGrade() const;
		
		void	increaseGrade();
		void	decreaseGrade();
		void	signForm(Form & form);
		
		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high !");
				}
		};
		
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low !");
				}
		};	
};

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif