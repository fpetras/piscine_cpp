/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:59:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 16:01:14 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 50;
	this->maxEnergyPoints_ = 50;
	this->level_ = 1;
	this->name_ = "Nameless challenger";
	this->meleeAttackDamage_ = 20;
	this->rangedAttackDamage_ = 15;
	this->armorDamageReduction_ = 3;
	std::cout << "A nameless challenger approaches the lair ";
	std::cout << "(ScavTrap default constructor has been called)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 50;
	this->maxEnergyPoints_ = 50;
	this->level_ = 1;
	this->name_ = name;
	this->meleeAttackDamage_ = 20;
	this->rangedAttackDamage_ = 15;
	this->armorDamageReduction_ = 3;
	std::cout << name << " approaches the lair ";
	std::cout << "(ScavTrap name constructor has been called)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << src.name_ << " has been duplicated ";
	std::cout << "(ScavTrap copy constructor has been called)" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name_ << " has left the lair ";
	std::cout << "(ScavTrap destructor has been called)" << std::endl;
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
