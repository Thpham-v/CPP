/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:51:10 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/10 07:54:34 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const name): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
	std::cout << _name << " died" << std::endl;
	return ;
}

void	HumanB::attack() const
{
	std::cout << _name << " attacks with their ";
	if (_weapon)
		std::cout << _weapon->getType() << std::endl;
	else
		std::cout << "hands" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
	return ;
}