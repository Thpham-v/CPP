/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:32:53 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/21 05:57:50 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{	
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap &		operator=(FragTrap const & rhs);
		
		void			attack(std::string const & target);
		void			highFivesGuys();
};

#endif