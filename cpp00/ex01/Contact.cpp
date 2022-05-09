/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 04:39:19 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/07 06:17:25 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

contact::contact(void)
{
	return;
}

contact::~contact(void)
{
	return;
}

void	contact::add(void)
{
	std::cout << "First name: ";
	std::cin >> this->_infos[firstname];
	std::cout << "last name: ";
	std::cin >> this->_infos[lastname];
	std::cout << "nickname: ";
	std::cin >> this->_infos[nickname];
	std::cout << "phone_number: ";
	std::cin >> this->_infos[phonenumber];
	std::cout << "darkest_secret: ";
	std::cin >> this->_infos[dark_secret];
	std::cin.ignore();
	return ;
}

void	resize(std::string str)
{
	if (str.size() >= 10)
	{
		str.resize(9);
		str.append(".");
	}
	else
		std::cout << std::setw(10);
	std::cout << str << "|";
	return;
}

void	contact::display1(int index)
{
	std::cout << std::setw(10) << index << "|";
	resize(this->_infos[firstname]);
	resize(this->_infos[lastname]);
	resize(this->_infos[nickname]);
	std::cout << std::endl;
	return;
}

void	contact::display2(void)
{
	std::cout	<< std::endl
				<< "First Name:       " << this->_infos[firstname] << std::endl
				<< "Last Name:        " << this->_infos[lastname] << std::endl
				<< "Nickname:         " << this->_infos[nickname] << std::endl
				<< "Phone Number:     " << this->_infos[phonenumber] << std::endl
				<< "Darkest secret:   " << this->_infos[dark_secret] << std::endl << std::endl;
}
