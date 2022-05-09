/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 05:47:26 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/05 06:02:51 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string		ft_toupper(std::string str)
{
	std::string::iterator it;
	
	for (it = str.begin(); it != str.end(); it++)
		*it = std::toupper(*it);
	return (str);
}

int main(int ac, char **av) {

	std::string	res;
	int i;
	
	if (ac == 1)
		res = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; i< ac; i++)
			res.append(ft_toupper(av[i]));
	}
	std::cout << res << " " << std::endl;
	return (0);
}
