/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:57:59 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/23 03:58:08 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		std::string		getType(void) const;
		Animal &		operator=(Animal const & rhs);
		virtual void	makeSound(void);

	protected:
		std::string	_type;
};

#endif