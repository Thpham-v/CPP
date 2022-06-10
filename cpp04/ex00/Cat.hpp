/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:37 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/23 03:58:39 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class		Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);
		Cat &		operator=(Cat const & rhs);
		void		makeSound(void);
};

#endif