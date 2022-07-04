/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:38:27 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/04 01:30:28 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery creation", 145, 137, "Undefined")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return (*this);
}

bool					ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream		o;
	std::string const	file = this->_target + "_shrubbery";

	try
	{
		Form::execute(executor);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	o.open(file.c_str(), std::ofstream::trunc | std::ofstream::out);
	if (!o.is_open())
	{
		std::cerr << "ShrubberyCreationForm::execute: Can not open the file" << std::endl;
		return (false);
	}
	o	<< "                      ,@@@@@🍒@,    🦋                      " << std::endl
		<< "             🦉,,,.   ,@🍒@@@@/@@,  .oo🍋888o.🦜       🦋     " << std::endl
		<< "           ,&%%&%🍑&🐒,@🍒@@🍒/@@@🍒@,8888\\🍋8/8o,           " << std::endl
		<< "          ,🍑&\\%&&%🍑&%,@@@\\🍒@@/@@@🍋\\88888/8🍋|         " << std::endl
		<< "         %🍑&&🍑&%&/%&&🍑@@\\🐿@/ /@@@🍋8888\\88🍋88        " << std::endl
		<< "          %&🍑%/ %🍑%%&&@@\\ V /@@  `88\\🐿 `/88           " << std::endl
		<< "          `&%\\ . /%&'    |.|        \\  |🍋'               " << std::endl
		<< "             '|o|        | |         | |          🦋         " << std::endl
		<< "              |.|        | |         | |                    " << std::endl
		<< "      🌱  🌷 \\/ _\\🌷🌱_🌱_/  ,\\_🌱🌷__ /  .\\_🌱🐢__🌱_     " << std::endl;
		o.close();
		return (true);
}