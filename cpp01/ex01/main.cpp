/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:48:21 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/10 05:54:38 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie	*horde;
	int		N;
	
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	N = std::atoi(av[1]);
	if (N > 0)
	{
		horde = zombieHorde(N, "vinc");
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete [] horde;
	}
	return (0);
}