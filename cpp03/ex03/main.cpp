/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:00:01 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/21 06:37:52 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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
	
	John.beRepaired(40);
	std::cout << "\nJohn:	"	<< "HP -> " << John.getHitPoints() << std::endl;
	std::cout << "\n";

	John.attack("Thib");
	Thib.takeDamage(John.getAttackDamage());
	std::cout << "\n";
	
	for (int i = 0; i < 5; i++)
	{
		Thib.attack("John");
		John.takeDamage(Thib.getAttackDamage());
		std::cout << "\n";
	}
	
	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - -\n" << std::endl;
	
	ScavTrap	Hedi("Hedi");
	std::cout << "\n";
	
	Thib.beRepaired(20);
	Hedi.attack("Thib");
	Thib.takeDamage(Hedi.getAttackDamage());
	std::cout << "\n";
	Thib.attack("Hedi");
	Hedi.takeDamage(Thib.getAttackDamage());
	std::cout << "\n";
	Hedi.guardGate();
	
	std::cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - -\n" << std::endl;

	FragTrap	Hugo("Hugo");
	std::cout << "\n";
	
	Hugo.attack("Hedi");
	Hedi.takeDamage(Hugo.getAttackDamage());
	std::cout << "\n";
	Hedi.beRepaired(20);
	Hugo.highFivesGuys();
	
	std::cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - -\n" << std::endl;
	
	DiamondTrap	Yoyo("Yoyo");
	std::cout << "\n";
	
	Yoyo.whoAmI();
	std::cout << "\n";
	Yoyo.attack("Hugo");
	Hugo.takeDamage(Yoyo.getAttackDamage());

	std::cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - -\n" << std::endl;

	return (0);
}