/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:46:02 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/10 07:47:26 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon const& weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << _name << " died" << std::endl;
	return ;
}

void	HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}