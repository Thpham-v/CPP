/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:41:40 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/13 03:52:08 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
			void		_debug();
			void		_info();
			void		_warning();
			void		_error();
			std::string	_levels[4];
			void		(Harl::*_f[4])();
			
			
		public:
			Harl();
			~Harl();
			void	complain(std::string level);
			std::string	getLevel(int level_id) const;
};

#endif