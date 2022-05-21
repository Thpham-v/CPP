/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 02:43:23 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/10 05:19:56 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	stack("stack");
	Zombie	*heap = newZombie("heap");
	
	stack.announce();
	heap->announce();
	randomChump("stack2");
	delete heap;
	return (0);
}