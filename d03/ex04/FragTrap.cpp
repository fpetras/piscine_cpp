/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:59:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 16:04:24 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 100;
	this->maxEnergyPoints_ = 100;
	this->level_ = 1;
	this->name_ = "Nameless player";
	this->meleeAttackDamage_ = 30;
	this->rangedAttackDamage_ = 20;
	this->armorDamageReduction_ = 5;
	std::cout << "A nameless player has entered the field ";
	std::cout << "(FragTrap default constructor has been called)" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 100;
	this->maxEnergyPoints_ = 100;
	this->level_ = 1;
	this->name_ = name;
	this->meleeAttackDamage_ = 30;
	this->rangedAttackDamage_ = 20;
	this->armorDamageReduction_ = 5;
	std::cout << name << " has entered the field ";
	std::cout << "(FragTrap name constructor has been called)" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << src.name_ << " has been replicated ";
	std::cout << "(FragTrap copy constructor has been called)" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->name_ << " has left the field ";
	std::cout << "(FragTrap destructor has been called)" << std::endl;
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
