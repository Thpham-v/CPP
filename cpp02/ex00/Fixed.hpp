/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 04:29:45 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/18 03:52:37 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_RawBits;
		static int const	_FractBits = 8;
	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		Fixed &	operator=(Fixed const & rhs);

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif
