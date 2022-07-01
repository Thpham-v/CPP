/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:58:37 by thpham-v          #+#    #+#             */
/*   Updated: 2022/07/01 19:04:55 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class		Cat : public AAnimal
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