/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:00:01 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/21 06:36:14 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Vinc("Vinc");
	ClapTrap	Thib("Thib");
	ClapTrap	John("John");
	
	Vinc.setAttackDamage(10);
	Thib.setAttackDamage(40);

	std::cout	<< "\nVinc:	"	<< "HP -> " << Vinc.getHitPoints()
								<< "     ENERGY -> " << Vinc.getEnergyPoints()
								<< "     ATTACK -> " << Vinc.getAttackDamage() << "\n"
				<< "__________________________________________________\n"
				<< "Thib:	"	<< "HP -> " << Thib.getHitPoints()
								<< "     ENERGY -> " << Thib.getEnergyPoints()
								<< "     ATTACK -> " << Thib.getAttackDamage() << "\n"
				<< "__________________________________________________\n"
				<< "John:	"	<< "HP -> " << John.getHitPoints()
								<< "     ENERGY -> " << John.getEnergyPoints()
								<< "     ATTACK -> " << John.getAttackDamage() << "\n" << std::endl;

	Thib.attack("Vinc");
	Vinc.takeDamage(Thib.getAttackDamage());
	
	std::cout << "\n";
	
	John.beRepaired(70);
	std::cout << "\nJohn:	"	<< "HP -> " << John.getHitPoints() << std::endl;
	std::cout << "\n";

	John.attack("Thib");
	Thib.takeDamage(John.getAttackDamage());
	std::cout << "\n";
	
	for (int i = 0; i < 10; i++)
	{
		Thib.attack("John");
		John.takeDamage(Thib.getAttackDamage());
		std::cout << "\n";
	}

	std::cout << std::endl;

	return (0);
}