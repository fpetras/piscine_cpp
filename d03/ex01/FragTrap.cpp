/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:59:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 07:54:44 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
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
	std::cout << "A nameless player has entered the field ";
	std::cout << "(Default constructor has been called)" << std::endl;
}

FragTrap::FragTrap(std::string name) :
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
	std::cout << name << " has entered the field ";
	std::cout << "(Name constructor has been called)" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << src.name_ << " has been replicated ";
	std::cout << "(Copy constructor has been called)" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->name_ << " has left the field ";
	std::cout << "(Destructor has been called)" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name_ << " deals a ranged attack to " <<
	target << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name_ << " deals a melee attack to " <<
	target << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
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

void		FragTrap::beRepaired(unsigned int amount)
{
	this->energyPoints_ += amount;
	if (this->energyPoints_ > this->maxEnergyPoints_)
		this->energyPoints_ = this->maxEnergyPoints_;
	std::cout << "Energy points: \033[1;32m" << this->energyPoints_ << "\033[0m"
	<< std::endl;
	std::cout << "Energy has been repaired" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::locale::global(std::locale(""));
	std::cout.imbue(std::locale());
	std::wcout.imbue(std::locale());

	std::wstring object[6] =
	{
		L"⛏  ",
		L"🔫 ",
		L"💣 ",
		L"🔪 ",
		L"🗡  ",
		L"⚔️  "
	};
	
	if (this->energyPoints_ >= 25)
	{
		srand(time(NULL) + rand());
		std::cout << this->name_ << " attacks " << target << " with a ";
		std::wcout << object[rand() % 6] << std::endl;
		this->energyPoints_ -= 25;
		std::cout << "Energy points: \033[1;32m" << this->energyPoints_ <<
		"\033[0m" << std::endl;
	}
	else
		std::cout << "Not enough energy points to perform action" << std::endl;
}

void		FragTrap::setName(std::string name)
{
	this->name_ = name;
	std::cout << "A player has taken the name " << name << std::endl;
}
