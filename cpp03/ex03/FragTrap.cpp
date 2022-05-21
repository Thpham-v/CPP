/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:47:22 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/21 06:33:20 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap New unconscious is coming !" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this-> _attack_damage = 20;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this-> _attack_damage = 20;
	std::cout << "FragTrap New unconscious " << this->_name << " is coming !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "FragTrap Another unconscious " << src._name << " is coming !" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap The confusion is over for " << this->_name << std:: endl;
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	FragTrap::attack(std::string const & target)
{
	if (this->_hit_points < 1)
		return;
	if (this->_energy_points < 1)
	{
		std::cout << "FragTrap It's not possible " << this->_name << " has no energy points.." << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " pushes " << target
		<< " and causing " << this->_attack_damage << " point of damage !" << std::endl;
	this->_energy_points--;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " asks for High fives.." << std::endl;
}