/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:43:37 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/11 03:33:48 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string const	_name;
		Weapon const&		_weapon;
		
	public:
		HumanA(std::string const name, Weapon const& weapon);
		~HumanA();
		void	attack() const;
};

#endif