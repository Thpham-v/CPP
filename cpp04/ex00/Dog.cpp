/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:52 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/23 04:12:15 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog class created" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const & src) : Animal()
{
	std::cout << "Dog copy class created" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog class deleted" << std::endl;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "Woof Woof" << std::endl;
	return;
}