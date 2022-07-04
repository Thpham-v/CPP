/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:15:03 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/04 04:40:37 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern someRandomIntern;
	Form* rrf;
	
	rrf = someRandomIntern.makeForm("invalid1", "target"); // -> invalide
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender"); // -> valide
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("shrubbery creation", "yoyo"); // -> valide
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	
	std::cout << std::endl;
	
	rrf = someRandomIntern.makeForm("presidential pardon", "target"); // -> valide
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("invalid2", "target"); // -> invalide
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	
	return (0);
}