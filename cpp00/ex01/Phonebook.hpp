/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:32:24 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/07 06:17:19 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		contact _contact[8];
		int		_n;
		int		_old;
		void	_display(void);
		
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	prompt(void);
		void	add(void);
		void	search(void);
};

#endif