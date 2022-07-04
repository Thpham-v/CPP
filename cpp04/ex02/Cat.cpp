/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:23 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/02 22:42:22 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat class created" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
	return ;
}

Cat::Cat(Cat const & src) : AAnimal(), _brain(NULL)
{
	std::cout << "Cat copy class created" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat class deleted" << std::endl;
	delete this->_brain;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Brain &		Cat::getBrain() const
{
	return (*this->_brain);
}

void	Cat::makeSound(void)
{
	std::cout << "Miaouu" << std::endl;
	return ;
}