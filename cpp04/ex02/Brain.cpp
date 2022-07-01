/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:53:01 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/23 06:01:18 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = '0';
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain &			Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdea(i);
	}
	return (*this);
}

std::string		Brain::getIdea(unsigned int index) const
{
	return (this->_ideas[index]);
}

void			Brain::setIdea(unsigned int index, std::string idea)
{
	this->_ideas[index] = idea;
}

void			Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << this->_ideas[i];
		if (i != 99)
			std::cout << " ";
	}
	std::cout << std::endl;
}