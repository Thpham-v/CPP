/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:23 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/23 03:58:25 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat class created" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & src) : Animal()
{
	std::cout << "Cat copy class created" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat class deleted" << std::endl;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "Miaouu" << std::endl;
	return ;
}