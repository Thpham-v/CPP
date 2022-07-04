/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:59:17 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/02 22:52:21 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
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
		std::cout << std::endl;

		delete meta;
		delete dog;
		delete cat;
	}

		std::cout << "\n";
		
	{	
		Animal *tab[10];
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			tab[i]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			delete tab[i];

		std::cout << "\n";

		Dog	dog;
		Cat	cat;

		std::cout << std::endl;

		std::cout << "dog1 brain: " << std::endl;
		dog.getBrain().printIdeas();

		dog.getBrain().setIdea(5, "manger");
		std::cout << "dog1 brain: " << std::endl;
		dog.getBrain().printIdeas();

		std::cout << std::endl;
		Dog dog2(dog);
		std::cout << std::endl;

		std::cout << "dog2 brain: " << std::endl;
		dog2.getBrain().printIdeas();

		dog2.getBrain().setIdea(10, "boire");
		std::cout << "dog2 brain: " << std::endl;
		dog2.getBrain().printIdeas();

		std::cout << std::endl;
		
		std::cout << "dog1 brain: " << std::endl;
		dog.getBrain().printIdeas();
		
		std::cout << "/----------------------------------------------------------------------------------------------------------------/\n" << std::endl;
		
		/*---------------------------------------------------------------------------*/
		
		std::cout << "cat1 brain: " << std::endl;
		cat.getBrain().printIdeas();

		cat.getBrain().setIdea(5, "manger");
		std::cout << "cat1 brain: " << std::endl;
		cat.getBrain().printIdeas();

		std::cout << std::endl;
		Cat cat2(cat);
		std::cout << std::endl;

		std::cout << "cat2 brain: " << std::endl;
		cat2.getBrain().printIdeas();

		cat2.getBrain().setIdea(10, "boire");
		std::cout << "cat2 brain: " << std::endl;
		cat2.getBrain().printIdeas();

		std::cout << std::endl;
		
		std::cout << "cat1 brain: " << std::endl;
		cat.getBrain().printIdeas();
		
		std::cout << std::endl;
	}
	return (0);
}