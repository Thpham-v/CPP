/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 06:13:11 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/10 06:13:39 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;
	
	std::cout	<< &string << std::endl
				<< stringPTR << std::endl
				<< &stringREF << std::endl;

	std::cout	<< string << std::endl
				<< *stringPTR << std::endl
				<< stringREF << std::endl;
	return (0);
}