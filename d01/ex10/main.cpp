/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 19:10:24 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 21:42:16 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{
	if (ac < 2)
		std::cout << std::cin.rdbuf();
	else
	{
		for (int i = 1; i < ac; i++)
		{
			if (!strcmp(av[i], "-"))
				std::cout << std::cin.rdbuf();
			else
			{
				std::string isdir("test -d ");
				isdir.append(av[i]);
				if (system(isdir.c_str()) == 0)
				{
					std::cerr << "cato9tails: " << av[i] << ": ";
					std::cerr << "Is a directory" << std::endl;
				}
				else
				{
					std::ifstream ifs(av[i]);
					if (ifs.is_open())
					{
						std::string line;
						while (getline(ifs, line))
							std::cout << line << '\n';
						ifs.close();
					}
					else
						std::cerr << "cato9tails: " << av[i] << ": " <<
						std::strerror(errno) << std::endl;
				}
			}
		}
	}
	return (0);
}
