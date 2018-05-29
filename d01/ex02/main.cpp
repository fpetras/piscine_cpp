/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 22:04:11 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 23:19:09 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

static std::string	types[28] =
{
	"Zombie", "Flag Zombie", "Conehead Zombie", "Pole Vaulting Zombie",
	"Buckethead Zombie", "Newspaper Zombie", "Screen Door Zombie",
	"Football Zombie", "Dancing Zombie", "Backup Danker", "Ducky Tube Zombie",
	"Snorkel Zombie", "Zomboni", "Bobsled Zombie", "Dolphin Rider Zombie",
	"Jack-in-the-Box Zombie", "Balloon Zombie", "Digger Zombie", "Pogo Zombie",
	"Zombie Yeti", "Bungee Zombie", "Ladder Zombie", "Catapult Zombie",
	"Gargantuar", "Imp", "Dr. Zomboss"
};

static std::string	RNG(void)
{
	std::string str("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	std::random_device rd;
	std::mt19937 generator(rd());
	std::shuffle(str.begin(), str.end(), generator);
	return str.substr(0, 8);
}

static void			randomChumpStack(void)
{
	static int i = 0;
	ZombieEvent create;
	Zombie chump(types[i++], RNG());
	chump.announce();
}

static void			randomChump(void)
{
	static int i = 0;
	ZombieEvent create;
	create.setZombieType(types[i++]);
	Zombie *chump = create.newZombie(RNG());
	chump->announce();
	delete chump;

}

int					main(void)
{
	for (int i = 0; i < 26; i++)
		randomChump();
	for (int i = 0; i < 26; i++)
		randomChumpStack();
	return (0);
}
