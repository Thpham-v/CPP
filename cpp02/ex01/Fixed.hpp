/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 06:23:55 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/18 02:05:03 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_RawBits;
		static int const	_FractBits = 8;
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed(int const i);
		Fixed(float const f);
		~Fixed();
		Fixed &	operator=(Fixed const & rhs);
		
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif