/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 05:56:24 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 07:59:41 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	return (0);
}
