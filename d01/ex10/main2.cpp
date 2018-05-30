/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:58:53 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 19:09:25 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	if (ac < 2)
		return system("cat");
	std::string cmd("cat");
	for (int i = 1; i < ac; i++)
	{
		cmd.append(" ");
		cmd.append(av[i]);
	}
	return system(cmd.c_str());
}
