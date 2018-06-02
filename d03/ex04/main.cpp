/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 05:56:24 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 23:06:18 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	FragTrap player_1("Player 1");
	FragTrap player_2("Player 2");
	FragTrap player_3(player_1);
	player_3.setName("Player 3");
	FragTrap player_4;

	srand(time(NULL));
	player_1.rangedAttack("Player 2");
	player_2.takeDamage(rand() % 42);
	player_2.meleeAttack("Player 1");
	player_1.takeDamage(rand() % 50);
	player_2.meleeAttack("Player 3");
	player_3.takeDamage(rand() % 100);
	player_4.rangedAttack("Player 2");
	player_2.takeDamage(rand() % 20);

	player_1.vaulthunter_dot_exe("Player 2");
	player_1.vaulthunter_dot_exe("Player 2");
	player_1.vaulthunter_dot_exe("Player 2");
	player_1.vaulthunter_dot_exe("Player 2");
	player_1.vaulthunter_dot_exe("Player 2");

	player_1.beRepaired(99);
	player_1.beRepaired(9001);

	player_1.vaulthunter_dot_exe("Player 2");
	player_1.vaulthunter_dot_exe("Player 2");

	player_2.vaulthunter_dot_exe("Player 1");
	player_2.vaulthunter_dot_exe("Player 1");
	std::cout << "\033[1;37m=======================================";
	std::cout << "========================================\033[0m" << std::endl;
	ScavTrap c1("Challenger 1");
	ScavTrap c2("Challenger 2");
	ScavTrap c3;

	c3 = c1;
	c3.setName("Challenger 3");

	c1.challengeNewcomer(c1.getName());
	c2.challengeNewcomer(c2.getName());
	c3.challengeNewcomer(c3.getName());
	std::cout << "\033[1;37m=======================================";
	std::cout << "========================================\033[0m" << std::endl;
	NinjaTrap n1("N1");
	NinjaTrap n2("N2");

	n1.ninjaShoebox(player_1);
	n1.ninjaShoebox(c2);
	n2.ninjaShoebox(n2);
	std::cout << "\033[1;37m=======================================";
	std::cout << "========================================\033[0m" << std::endl;
	SuperTrap s1;
	s1.setName("S1");
	s1.rangedAttack("S1");
	s1.vaulthunter_dot_exe("S1");
	s1.ninjaShoebox(player_1);
	s1.ninjaShoebox(n2);
	s1.ninjaShoebox(c1);
	return (0);
}
