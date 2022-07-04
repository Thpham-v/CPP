/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:59:17 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/02 19:29:58 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	*meta = new Animal();
	std::cout << "\n";
	Animal	*dog = new Dog();
	std::cout << "\n";
	Animal	*cat = new Cat();

	std::cout	<< "\n"
				<< meta->getType() << ": ";
	meta->makeSound();
	std::cout	<< dog->getType() << ": ";
	dog->makeSound();
	std::cout	<< cat->getType() << ": ";
	cat->makeSound();

	std::cout << "\n";

	delete meta;
	delete dog;
	delete cat;

	std::cout << "\n";
	WrongAnimal *wrong = new WrongAnimal();
	std::cout << "\n";
	WrongAnimal	*wrongCat = new WrongCat;
	
	std::cout	<< "\n" << wrong->getType() << ": ";
	wrong->makeSound();
	std::cout	<< wrongCat->getType() << ": ";
	wrongCat->makeSound();

	std::cout << std::endl;
	
	delete wrong;
	delete wrongCat;
	
	return (0);
}