/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:55:41 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/18 06:41:37 by thpham-v         ###   ########.fr       */
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
		Fixed &		operator=(Fixed const & rhs);
		
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;

		bool		operator>(Fixed const &rhs) const;
		bool		operator<(Fixed const & rhs) const;
		bool		operator>=(Fixed const & rhs) const;
		bool		operator<=(Fixed const & rhs) const;
		bool		operator==(Fixed const & rhs) const;
		bool		operator!=(Fixed const & rhs) const;

		Fixed		operator+(Fixed const & rhs) const;
		Fixed		operator-(Fixed const & rhs) const;
		Fixed		operator*(Fixed const & rhs) const;
		Fixed		operator/(Fixed const & rhs) const;

		Fixed &		operator++(void);		//prefix increment
		Fixed &		operator--(void);
		Fixed		operator++(int);		//postfix increment
		Fixed		operator--(int);

		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);
		static Fixed &			min(Fixed & a, Fixed & b);
		static Fixed &			max(Fixed & a, Fixed & b);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif