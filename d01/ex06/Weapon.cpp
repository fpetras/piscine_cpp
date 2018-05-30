/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:54:04 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 09:25:24 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type_(type)
{
	return ;
}

const std::string	&Weapon::getType(void)
{
	return this->type_;
}

void				Weapon::setType(std::string type)
{
	this->type_ = type;
}
