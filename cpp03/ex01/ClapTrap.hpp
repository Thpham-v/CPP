/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 05:29:21 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/21 02:20:45 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		
		ClapTrap &		operator=(ClapTrap const & rhs);
		void 			attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		unsigned int	getAttackDamage() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		void			setAttackDamage(unsigned int);
};

#endif