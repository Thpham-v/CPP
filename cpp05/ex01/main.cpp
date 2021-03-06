/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:15:03 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/03 19:02:54 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
	Bureaucrat boss("big boss", 1);
	Form form1("[--01234--]", 5, 1);
	std::cout << form1 << std::endl;
	boss.signForm(form1);
	std::cout << form1 << std::endl;
	}

	std::cout << std::endl;

	{
	Bureaucrat stagiaire("stagiaire", 145);
	Form form2("[--56789--]", 30, 10);
	std::cout << form2 << std::endl;
	stagiaire.signForm(form2);
	std::cout << form2 << std::endl;
	}
	return (0);
}