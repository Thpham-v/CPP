/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:52 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/02 22:25:03 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog class created" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(Dog const & src) : AAnimal(), _brain(NULL)
{
	std::cout << "Dog copy class created" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog class deleted" << std::endl;
	delete this->_brain;
}

Dog &	Dog::operator=(Dog const & rhs)
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

void	Dog::makeSound()
{
	std::cout << "Woof Woof" << std::endl;
}

Brain &		Dog::getBrain() const
{
	return (*this->_brain);
}