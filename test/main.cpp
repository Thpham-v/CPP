/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 02:25:19 by thpham-v          #+#    #+#             */
/*   Updated: 2022/06/07 02:37:59 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "homme.hpp"

int	main()
{
	homme humain1("thib", 9);
	homme humain2;
	
	humain1.getAge();
	humain1.getName();
	std::cout << "\n";
	humain2.getAge();
	humain2.getName();
	std::cout << "\n";
	humain1.setAge(12);
	humain1.getAge();
	
	return (0);
}