/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:15:03 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/04 01:38:26 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	boss("big boss", 1);
	Bureaucrat	stagiaire("stagiaire", 145);
	Form *form = new ShrubberyCreationForm("trees");

	std::cout << *form << std::endl;
	boss.signForm(*form);
	std::cout << *form << std::endl;
	boss.executeForm(*form);
	stagiaire.executeForm(*form);
	delete form;

	std::cout << std::endl;
	
	form = new RobotomyRequestForm("newTarget");
	boss.executeForm(*form);
	boss.signForm(*form);
	stagiaire.executeForm(*form);
	boss.executeForm(*form);
	delete form;

	std::cout << std::endl;

	form = new PresidentialPardonForm("Billy");
	stagiaire.signForm(*form);
	boss.executeForm(*form);
	boss.signForm(*form);
	form->execute(boss);
	delete form;
	return (0);
}