/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:49:10 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 23:10:11 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : type_(type), name_(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name_ << " has been destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name_ << " (\033[1;31m" << this->type_ <<
	"\033[0m)> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
