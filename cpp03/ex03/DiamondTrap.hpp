/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:06:47 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/21 05:45:07 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap &		operator=(DiamondTrap const & rhs);
		
		void	attack(std::string const & target);
		void	whoAmI();
};

#endif