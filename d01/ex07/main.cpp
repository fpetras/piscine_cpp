/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:37:17 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 10:39:12 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

static void	replace(std::string &str,
			const std::string &search, const std::string &replace)
{
	size_t pos;

	pos = 0;
	if (search.empty() || replace.empty())
		return ;
	while ((pos = str.find(search, pos)) != std::string::npos)
	{
    	str.replace(pos, search.length(), replace);
		pos += replace.length();
	}
}

int			main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "usage: " << av[0] << " file string1 string2" << std::endl;
		return (1);
	}
	std::fstream		ifs(av[1]);
	std::stringstream	buf;
	std::string			file;
	std::string			file_replace(av[1]);
	file_replace.append(".replace");
	buf << ifs.rdbuf();
	file = buf.str();
	ifs.close();
	std::ofstream		ofs(file_replace);
	replace(file, av[2], av[3]);
	ofs << file;
	ofs.close();
	return (0);
}
