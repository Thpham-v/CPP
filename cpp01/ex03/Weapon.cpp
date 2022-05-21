/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 06:45:11 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/10 06:52:52 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type): _type(type)
{
}

Weapon::~Weapon()
{
}

std::string	const &		Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}