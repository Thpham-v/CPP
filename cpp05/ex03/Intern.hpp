/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 04:23:55 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/04 04:24:23 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class		Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		virtual	~Intern(void);
		Intern &		operator=(Intern const & rhs);
		Form *			makeForm(std::string name, std::string target);
};

#endif