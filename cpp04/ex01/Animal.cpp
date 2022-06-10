/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:57:18 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/23 04:13:18 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Undefined")
{
	std::cout << "Animal class created" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy class created" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal (" << this->_type << ") deleted" << std::endl;
	return ;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void)
{
	std::cout << "*nothing is happening*" << std::endl;
	return;
}