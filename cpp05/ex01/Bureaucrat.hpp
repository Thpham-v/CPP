/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:14:59 by thpham-v          #+#    #+#             */
/*   Updated: 2022/06/23 03:08:37 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		unsigned int		_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat (const Bureaucrat & rhs);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &);

		std::string const &	getName() const;
		unsigned int		getGrade() const;
		
		void	increaseGrade();
		void	decreaseGrade();
		
		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low !");
				}
		};
		
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high !");
				}
		};	
};

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif