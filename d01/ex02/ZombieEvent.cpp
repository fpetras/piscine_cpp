/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:54:01 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 22:13:12 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->type2_ = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(this->type2_, name);
	return new_zombie;
}
