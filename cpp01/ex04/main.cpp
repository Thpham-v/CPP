/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 03:46:34 by thpham-v          #+#    #+#             */
/*   Updated: 2022/05/12 06:10:12 by thpham-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error(std::string error_msg)
{
	std::cerr << error_msg << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	/************Open and Error*********/
	
	if (ac != 4)
		return (error("Usage: <filename> <to_find> <to_replace>"));
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (filename.empty() || s1.empty() || s2.empty())
		return (error("Error: empty argument"));
	std::ifstream	file(filename.c_str());
	if (!file.is_open())
		return (error("Cannot open the file"));
	std::ofstream	replaceF((filename + ".replace").c_str());
	if (!replaceF.is_open())
	{
		file.close();
		return (error("Error while creating file"));
	}
	
	/***********Find and Replace********/
	
	std::string	line;
	std::size_t	pos;
	std::size_t	len = s1.size();
	
	while (std::getline(file, line))
	{
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, len);
			line.insert(pos, s2);
		}
		replaceF << line << std::endl;
	}
	file.close();
	replaceF.close();
	return (0);
}
