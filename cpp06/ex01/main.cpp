/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 04:53:33 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/04 05:09:44 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

/*an unsigned integer type with the property that any valid pointer
 can be converted to this type, then converted back to pointer,
 and the result will compare equal to the original pointer.*/

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);

	return (raw);
}

Data*	deserialize(uintptr_t raw)
{
	Data *	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main()
{
	Data *		data = new Data;
	uintptr_t 	raw;
	
	data->value1 = 99;
	data->value2 = 42;
	
	std::cout << data->value1 << std::endl;
	std::cout << data->value2 << std::endl;
	std::cout << data << std::endl;
	
	raw = serialize(data);
	data = deserialize(raw);
	
	std::cout << data->value1 << std::endl;
	std::cout << data->value2 << std::endl;
	std::cout << data << std::endl;

	delete data;

	return (0);
}