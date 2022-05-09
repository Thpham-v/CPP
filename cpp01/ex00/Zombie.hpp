/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 07:11:05 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/09 07:24:48 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class 	Zombie
{
		private:
			std::string const _name;
		public:
			Zombie(std::string name);
			~Zombie();
			void	announce();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif