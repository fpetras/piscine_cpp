/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:05:31 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 09:33:22 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
name_(name),
weaponRef_(weapon)
{
	return ;
}

void	HumanA::attack(void)
{
	std::string tmp = this->weaponRef_.getType();
	std::cout << this->name_ << " attacked with ";
	if (tmp.front() == 'c')
		std::cout << "a ";
	std::cout << tmp << std::endl;
}
