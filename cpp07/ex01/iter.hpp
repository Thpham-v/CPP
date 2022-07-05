/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:24:14 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/05 02:52:31 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T const * array, size_t const lenght, void(*f)(T const & arg))
{
	for (size_t i = 0; i < lenght; i++)
		f(array[i]);
	return;
}

template<typename T>
void	print(T const & a)
{
	std::cout << a << std::endl;
	return;
}

#endif