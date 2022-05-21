/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:27:54 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/10 05:41:57 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif