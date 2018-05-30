/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:05:11 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 17:38:38 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const &target)
{
	std::cout << target << " has suffered a melee attack" << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << target << " has suffered a ranged attack" << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << target << " has been exposed to an intimidating shout" <<
	std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	void (Human::*actions[4])(std::string const &target) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	for (int i = 0; i < 3; i++)
		if (action_names[i].compare(action_name) == 0)
			(this->*actions[i])(target);
}
