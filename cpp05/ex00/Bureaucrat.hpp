/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:14:59 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/03 17:11:06 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int		_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat (const Bureaucrat & rhs);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &);

		std::string const &	getName() const;
		int		getGrade() const;
		
		void	increaseGrade();
		void	decreaseGrade();
		
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