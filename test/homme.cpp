/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 04:00:53 by thpham-v          #+#    #+#             */
/*   Updated: 2022/06/03 05:16:19 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "homme.hpp"

homme::homme() : _name("undefined"), _age(0)
{
	std::cout << "Constructor call" << std::endl;	
}

homme::homme(std::string name, unsigned int age) : _name(name), _age(age)
{
	std::cout << "Parametric constructor call" << std::endl;
}

homme::homme(const homme & src) : _name("undefined")
{
	std::cout << "Copy constructor call" << std::endl;
	*this = src;
}

homme::~homme()
{
	std::cout << "Destructor call" << std::endl;
}

homme & homme::operator=(const homme & rhs)
{
	if (this != &rhs)
	{
		// _name can't be assigned as it is const
		this->_age = rhs._age;
	}
	return (*this);
}

unsigned int	homme::getAge() const
{
	std::cout << "Get age (" << _age << ")" << std::endl;
	return (this->_age);
}

void			homme::setAge(unsigned int age)
{
	this->_age = age;
	std::cout << "Set age at : " << _age << std::endl;
}

std::string const &		homme::getName() const
{
	std::cout << "Get name (" << _name << ")" << std::endl;
	return (this->_name);
}