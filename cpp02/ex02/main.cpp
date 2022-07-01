/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 04:02:48 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/01 20:15:22 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}

	std::cout << std::endl;

	{
		Fixed	a(10);
		Fixed	b(20);

		if (a < b)
			std::cout << "a is smaller than b" << std::endl;
		else
			std::cout << "a is bigger than b" << std::endl;
		if (a != b)
			std::cout << Fixed::min(a, b) << std::endl;
		a = a + 10;
		if (a == b)
			std::cout << "a and b are equal" << std::endl;
		if (a >= b)
			a = (a * 3) - (b / b);
		std::cout << a << std::endl;
		if (a > b)
			std::cout << "a is bigger than b" << std::endl;
		else
			std::cout << "a is smaller than b" << std::endl;
		if (a <= b)
			std::cout << "a is not smaller or equal than b";
	}
	return (0);
}