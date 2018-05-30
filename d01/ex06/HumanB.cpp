/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:09:27 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 09:34:57 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weaponPtr_ = &weapon;
}

void	HumanB::attack(void)
{
	std::string tmp = this->weaponPtr_->getType();
	std::cout << this->name_ << " attacked with ";
	if (tmp.front() == 'c')
		std::cout << "a ";
	std::cout << tmp << std::endl;
}
