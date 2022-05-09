/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:34:53 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/07 06:05:01 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstdlib>
# include <iostream>
# include <iomanip>

class contact
{
	private:
		enum type
		{
			firstname,
			lastname,
			nickname,
			phonenumber,
			dark_secret,
		};
		std::string _infos[5];
	
	public:
		contact(void);
		~contact(void);
		void	add(void);
		void	display1(int index);
		void	display2(void);
};

#endif