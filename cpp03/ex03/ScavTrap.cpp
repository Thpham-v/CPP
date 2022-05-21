/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 02:15:44 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/21 03:21:29 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap New fighter is coming !" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this-> _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this-> _attack_damage = 20;
	std::cout << "ScavTrap New fighter " << this->_name << " is coming !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap Another fighter " << src._name << " is coming !" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap The fray is over for " << this->_name << std:: endl;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
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

void	ScavTrap::attack(std::string const & target)
{
	if (this->_hit_points < 1)
		return;
	if (this->_energy_points < 1)
	{
		std::cout << "ScavTrap Too bad" << this->_name << " has no energy points.." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " hits " << target
		<< " and causing " << this->_attack_damage << " point of damage !" << std::endl;
	this->_energy_points--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " enterred in Gate keeper mode !" << std::endl;
}