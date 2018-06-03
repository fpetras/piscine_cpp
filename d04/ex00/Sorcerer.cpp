/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 07:44:45 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/03 08:23:25 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : name_("NAME"), title_("TITLE")
{
	std::cout << "NAME, TITLE, is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) :
name_(name),
title_(title)
{
	std::cout << this->name_ << ", " << this->title_ << ", is born !" <<
	std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
	std::cout << this->name_ << ", " << this->title_ << ", is born !" <<
	std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name_ << ", " << this->title_ << ", is dead. ";
	std::cout << "Consequences will never be the same !" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	this->name_ = rhs.name_;
	this->title_ = rhs.title_;
	return *this;
}

std::string	Sorcerer::getName(void) const
{
	return this->name_;
}

std::string	Sorcerer::getTitle(void) const
{
	return this->title_;
}

void		Sorcerer::polymorph(Victim const &vict) const
{
	vict.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs)
{
	return o << "I am " << rhs.getName() << ", " << rhs.getTitle() <<
		", and I like ponies !" << std::endl;
}
