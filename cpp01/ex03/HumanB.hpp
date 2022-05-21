/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:48:13 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/11 03:34:00 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	const	_name;
		Weapon*				_weapon;	

	public:
		HumanB(std::string const name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon& weapon);
};

#endif