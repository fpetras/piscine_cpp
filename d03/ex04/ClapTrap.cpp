/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:59:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 16:10:26 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
hitPoints_(100),
maxHitPoints_(100),
energyPoints_(100),
maxEnergyPoints_(100),
level_(1),
name_("Nameless player"),
meleeAttackDamage_(30),
rangedAttackDamage_(20),
armorDamageReduction_(5)
{
	std::cout << "(ClapTrap default constructor has been called)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
hitPoints_(100),
maxHitPoints_(100),
energyPoints_(100),
maxEnergyPoints_(100),
level_(1),
name_(name),
meleeAttackDamage_(30),
rangedAttackDamage_(20),
armorDamageReduction_(5)
{
	std::cout << "(ClapTrap name constructor has been called)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "(ClapTrap copy constructor has been called)" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "(ClapTrap destructor has been called)" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->hitPoints_ = rhs.hitPoints_;
	this->maxHitPoints_ = rhs.maxHitPoints_;
	this->energyPoints_ = rhs.energyPoints_;
	this->maxEnergyPoints_ = rhs.maxEnergyPoints_;
	this->level_ = rhs.level_;
	this->name_ = rhs.name_;
	this->meleeAttackDamage_ = rhs.meleeAttackDamage_;
	this->rangedAttackDamage_ = rhs.rangedAttackDamage_;
	this->armorDamageReduction_ = rhs.armorDamageReduction_;
	return *this;
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name_ << " deals a ranged attack to " <<
	target << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name_ << " deals a melee attack to " <<
	target << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < this->armorDamageReduction_)
		amount = 0;
	else
		amount -= this->armorDamageReduction_;
	this->hitPoints_ -= (int)amount;
	if (this->hitPoints_ > this->maxHitPoints_)
		this->hitPoints_ = this->maxHitPoints_;
	std::cout << "Hit points: \033[1;31m" << this->hitPoints_ << "\033[0m ";
	std::cout << "The blow has been lessened by " << this->armorDamageReduction_
	<< " points" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->energyPoints_ += amount;
	if (this->energyPoints_ > this->maxEnergyPoints_)
		this->energyPoints_ = this->maxEnergyPoints_;
	std::cout << "Energy points: \033[1;32m" << this->energyPoints_ << "\033[0m"
	<< std::endl;
	std::cout << "Energy has been repaired" << std::endl;
}

void		ClapTrap::setName(std::string name)
{
	this->name_ = name;
	std::cout << "A player has taken the name " << name << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return this->name_;
}
