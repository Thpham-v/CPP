/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 03:41:37 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/13 03:51:31 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	enum	level_enum{DEBUG, INFO, WARNING, ERROR};
	int		level_id;
	
	if (ac != 2)
	{
		std::cerr << "Usage: <LOG_LEVEL>" << std::endl;
		return (1);
	}

	for (level_id = 0; level_id < 4; level_id++)
		if (harl.getLevel(level_id) == av[1])
			break;
	switch	(level_id)
	{
		case DEBUG:
			harl.complain("DEBUG");
		case INFO:
			harl.complain("INFO");
		case WARNING:
			harl.complain("WARNING");
		case ERROR:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	
	return (0);
}