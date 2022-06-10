/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:00:22 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/23 04:00:45 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat class created" << std::endl;
	this->_type = "Wrong Cat";
	return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal()
{
	std::cout << "WrongCat copy class created" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat class deleted" << std::endl;
	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void)
{
	std::cout << "Miaouu" << std::endl;
	return ;
}
