/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 07:55:41 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/03 08:21:27 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : name_("NAME")
{
	std::cout << "Some random victim called NAME just popped !" << std::endl;
}

Victim::Victim(std::string name) : name_(name)
{
	std::cout << "Some random victim called " << this->name_ << " just popped !"
	<< std::endl;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	std::cout << "Some random victim called " << this->name_ << " just popped !"
	<< std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name_ <<
	" just died for no apparent reason !" << std::endl;
}

Victim	&Victim::operator=(Victim const &rhs)
{
	this->name_ = rhs.name_;
	return *this;
}

std::string	Victim::getName(void) const
{
	return this->name_;
}

void		Victim::getPolymorphed(void) const
{
	std::cout << this->name_ << " has been turned into a cute little sheep !" <<
	std::endl;
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs)
{
	return o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
}
