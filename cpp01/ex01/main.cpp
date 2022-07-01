/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:48:21 by thpham-v          #+#    #+#             */
/*   Updated: 2022/06/28 19:18:32 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	Zombie			*horde;
	unsigned int	N;
	
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	N = std::atoi(av[1]);
	if (ft_strlen(av[1]) > 10 || N < 0 || N > 2147483647)
	{
		std::cout << "Incorrect number.." << std::endl;
		return (1);
	}
	if (N > 0)
	{
		horde = zombieHorde(N, "john");
		for (unsigned int i = 0; i < N; i++)
			horde[i].announce();
		delete [] horde;
	}
	return (0);
}