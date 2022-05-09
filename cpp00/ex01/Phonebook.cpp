/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:51:59 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/07 06:28:22 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void) : _n(0), _old(0)
{
	std::cout << "******* PhoneBook *******\n" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << " ****** Exit PhoneBook ******" << std::endl;
	return ;
}

void	PhoneBook::prompt(void)
{
	std::cout << "[ADD | SEARCH | EXIT]:\n\n" << "> ";
}

void	PhoneBook::_display(void)
{
	std::cout	<< std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 1; i <= this->_n; i++)
		this->_contact[i - 1].display1(i);
}

void	PhoneBook::add(void)
{
	std::string	input;

	if (this->_n >= 8)
	{
		if (this->_old >= 8)
			this->_old = 0;
		this->_contact[this->_old].add();
		this->_old++;
		return;
	}
	this->_contact[_n].add();
	this->_n++;
	return;
}

void	PhoneBook::search(void)
{
	std::string	input;
	int			id = -1;
	
	if (!this->_n)
	{
		std::cout << "! Phonebook is empty, nothing to display" << std::endl;
		return ;
	}
	this->_display();
	while (!std::cin.eof())
	{
		std::cout << std::endl << "Select a contact index / leave empty to return menu: ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "Back to main menu" << std::endl;
			break ;
		}
		id = std::atoi(input.c_str());
		if (id <= this->_n && id > 0)
			return (this->_contact[id - 1].display2());
		std::cout << "Invalid index" << std::endl;
	}
	return ;
}
