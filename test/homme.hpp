/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   homme.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 03:51:22 by thpham-v          #+#    #+#             */
/*   Updated: 2022/06/03 05:17:27 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOMME_HPP
# define HOMME_HPP

# include <iostream>

class homme
{
	private:
		std::string	const	_name;
		unsigned int		_age;
	public:
		homme();
		homme(std::string name, unsigned int age);
		homme(const homme & src);
		~homme();
		homme & operator=(const homme & rhs);
		
		unsigned int			getAge() const;
		void					setAge(unsigned int age);
		std::string	const &		getName() const;
};

#endif