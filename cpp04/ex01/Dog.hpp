/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:59:07 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/02 19:44:22 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class		Dog : public Animal
{	
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		Dog &	operator=(Dog const & rhs);
		void	makeSound(void);
		Brain & 	getBrain(void) const;
};

#endif