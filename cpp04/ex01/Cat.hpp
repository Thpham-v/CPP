/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:37 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/24 04:44:50 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class		Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);
		Cat &		operator=(Cat const & rhs);
		
		Brain &		getBrain() const;
		void		makeSound(void);
};

#endif