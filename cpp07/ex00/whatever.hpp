/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:01:04 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/04 18:29:30 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>

void	swap(T & a, T & b)
{
	T	tmp;
	
	tmp = a;
	a = b;
	b = tmp;
	
	return;
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template<typename T>
T const &	max(T const & a, T const & b)
{
	return (a > b ? a : b);
}

#endif