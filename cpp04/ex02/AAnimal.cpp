/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:57:18 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/01 19:04:00 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Undefined")
{
	std::cout << "AAnimal class created" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal copy class created" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal (" << this->_type << ") deleted" << std::endl;
	return ;
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}

AAnimal &	AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}
