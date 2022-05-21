/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:41:43 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/13 03:45:24 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
	_f[0] = &Harl::_debug;
	_f[1] = &Harl::_info;
	_f[2] = &Harl::_warning;
	_f[3] = &Harl::_error;
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::_debug(void)
{
	std::cout	<< "[ DEBUG ]" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl << std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout	<< "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout	<< "[ WARNING ]" << std::endl
				<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout	<< "[ ERROR ]" << std::endl
				<< "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (_levels[i] == level)
			(this->*_f[i])();
	}
	return ;
}

std::string	Harl::getLevel(int level_id) const
{
	return (this->_levels[level_id]);
}