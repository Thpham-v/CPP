/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:57:59 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/01 19:03:21 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void);
		std::string		getType(void) const;
		AAnimal &		operator=(AAnimal const & rhs);
		virtual void	makeSound(void) = 0;

	protected:
		std::string	_type;
};

#endif