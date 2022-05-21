/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:13:08 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/21 05:46:47 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap New idiot is coming !" << std::endl;
	ClapTrap::_name = "_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this-> _attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this-> _attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap New idiot " << this->_name << " is coming !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "DiamondTrap Another idiot " << src._name << " is coming !" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap The bickering is over for " << this->_name << std:: endl;
}

DiamondTrap &		DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->ClapTrap::_name = rhs.ClapTrap::_name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I'm " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}