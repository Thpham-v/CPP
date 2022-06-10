/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 04:52:56 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/23 05:56:49 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		~Brain();
		Brain(Brain const & src);
		Brain &		operator=(Brain const & rhs);
		
		std::string getIdea(unsigned int index) const;
		void		setIdea(unsigned int index, std::string idea);
		void		printIdeas(void) const;
};

#endif