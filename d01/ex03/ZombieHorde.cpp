/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 23:26:32 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 23:48:26 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

static std::string	RNG(void)
{
	std::string str("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	std::random_device rd;
	std::mt19937 generator(rd());
	std::shuffle(str.begin(), str.end(), generator);
	return str.substr(0, 8);
}
ZombieHorde::ZombieHorde(int n)
{
	this->horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		this->horde[n].setName(RNG());
		this->horde[n].announce();
	}
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "The horde has been destroyed" << std::endl;
	delete [] this->horde;
}
