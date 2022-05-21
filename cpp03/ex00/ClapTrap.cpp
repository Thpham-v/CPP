/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 06:55:25 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/20 04:34:57 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap New challenger is coming !" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap New challenger " << this->_name << " is coming !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src): _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Another challenger " << src._name << " is coming !" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap The fight is over for " << this->_name << std::endl;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs)
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

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hit_points < 1)
		return;
	if (this->_energy_points < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left.." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< " and causing " << this->_attack_damage << " point of damage !" << std::endl;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is already KO.." << std::endl;
		return;
	}
	if (amount > 10)
		std::cout << "ClapTrap Wow " << this->_name << " takes "
			<< amount << " points of damage and loses a lot of blood." << std::endl;
	else
		std::cout << "ClapTrap It's not very effective but " << this->_name
			<< " takes " << amount << " poins of damage." << std::endl;
	if (amount > this->_hit_points)
		_hit_points = 0;
	else
		this->_hit_points -= amount;
	if (this->_hit_points < 1)
		std::cout << this->_name << " is KO !!!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points < 1)
		return;
	if (this->_energy_points < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left.." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name
		<< " drinks a potion and earns " << amount << " hit points." << std::endl;
	this->_hit_points += amount;
	this->_energy_points--;
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (this->_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

void			ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attack_damage = amount;
}