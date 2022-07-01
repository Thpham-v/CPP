/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:59:17 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/01 19:07:52 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	{
		//AAnimal	*meta = new AAnimal();
		//std::cout << "\n";
		AAnimal	*dog = new Dog();
		std::cout << "\n";
		AAnimal	*cat = new Cat();

		std::cout	<< "\n";
		std::cout	<< dog->getType() << ": ";
		dog->makeSound();
		std::cout	<< cat->getType() << ": ";
		cat->makeSound();

		std::cout << "\n";
		//delete meta;
		delete dog;
		delete cat;
	}

		std::cout << "\n";
		
	{	
		AAnimal *tab[10];
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

		AAnimal	*dog = new Dog();
		AAnimal	*cat = new Cat();

		std::cout << std::endl;

		std::cout << "dog brain: " << std::endl;
		static_cast<Dog *>(dog)->getBrain().printIdeas();

		static_cast<Dog *>(dog)->getBrain().setIdea(5, "manger");
		std::cout << "dog brain: " << std::endl;
		static_cast<Dog *>(dog)->getBrain().printIdeas();

		std::cout << std::endl;
		Dog dog2(*static_cast<Dog *>(dog));
		std::cout << std::endl;

		std::cout << "dog2 brain: " << std::endl;
		dog2.getBrain().printIdeas();

		dog2.getBrain().setIdea(10, "boire");
		std::cout << "dog2 brain: " << std::endl;
		dog2.getBrain().printIdeas();

		std::cout << std::endl;
		
		
		delete dog;
		delete cat;
	}

	return (0);
}