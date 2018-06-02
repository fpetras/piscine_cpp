/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:59:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 16:00:10 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
hitPoints_(100),
maxHitPoints_(100),
energyPoints_(50),
maxEnergyPoints_(50),
level_(1),
name_("Nameless challenger"),
meleeAttackDamage_(20),
rangedAttackDamage_(15),
armorDamageReduction_(3)
{
	std::cout << "A nameless challenger approaches the lair ";
	std::cout << "(Default constructor has been called)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
hitPoints_(100),
maxHitPoints_(100),
energyPoints_(50),
maxEnergyPoints_(50),
level_(1),
name_(name),
meleeAttackDamage_(20),
rangedAttackDamage_(15),
armorDamageReduction_(3)
{
	std::cout << name << " approaches the lair ";
	std::cout << "(Name constructor has been called)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << src.name_ << " has been duplicated ";
	std::cout << "(Copy constructor has been called)" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name_ << " has left the lair ";
	std::cout << "(Destructor has been called)" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
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

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name_ << " attacks " << target << " from a distance" <<
	std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name_ << " attacks " << target << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
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

void		ScavTrap::beRepaired(unsigned int amount)
{
	this->energyPoints_ += amount;
	if (this->energyPoints_ > this->maxEnergyPoints_)
		this->energyPoints_ = this->maxEnergyPoints_;
	std::cout << "Energy points: \033[1;32m" << this->energyPoints_ << "\033[0m"
	<< std::endl;
	std::cout << "Energy has been repaired" << std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const &target)
{
	std::locale::global(std::locale(""));
	std::cout.imbue(std::locale());
	std::wcout.imbue(std::locale());

	std::wstring challenge[6] =
	{
		L"[Challenge 1️⃣  ]",
		L"[Challenge 2️⃣  ]",
		L"[Challenge 3️⃣  ]",
		L"[Challenge 4️⃣  ]",
		L"[Challenge 5️⃣  ]",
		L"[Challenge 6️⃣  ]"
	};
	
	srand(time(NULL) + rand());
	std::wcout << challenge[rand() % 6] << " has been assigned to ";
	std::cout << target << std::endl;
}

void		ScavTrap::setName(std::string name)
{
	this->name_ = name;
	std::cout << "A challenger has taken the name " << name << std::endl;
}

std::string	ScavTrap::getName(void)
{
	return this->name_;
}
