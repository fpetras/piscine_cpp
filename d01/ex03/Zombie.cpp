/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:49:10 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 23:48:40 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::setName(std::string name)
{
	this->name_ = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name_ << " (\033[1;31m" << this->type_ <<
	"\033[0m)> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
