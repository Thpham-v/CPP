/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:27:38 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/07 06:27:37 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	std::string		input;
	PhoneBook		book;
	
	while (!std::cin.eof())
	{
		book.prompt();
		getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		else if (!input.empty())
			std::cout << "Error please enter valid command" << std::endl;
		std::cout << "\n************************\n" << std::endl;
	}
	return (0);
}