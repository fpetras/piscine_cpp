/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:59:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 23:03:59 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	this->hitPoints_ = 60;
	this->maxHitPoints_ = 60;
	this->energyPoints_ = 120;
	this->maxEnergyPoints_ = 120;
	this->level_ = 1;
	this->name_ = "Nameless challenger";
	this->meleeAttackDamage_ = 60;
	this->rangedAttackDamage_ = 5;
	this->armorDamageReduction_ = 0;
	std::cout << "A NinjaTrap approaches ";
	std::cout << "(NinjaTrap default constructor has been called)" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints_ = 60;
	this->maxHitPoints_ = 60;
	this->energyPoints_ = 120;
	this->maxEnergyPoints_ = 120;
	this->level_ = 1;
	this->name_ = name;
	this->meleeAttackDamage_ = 60;
	this->rangedAttackDamage_ = 5;
	this->armorDamageReduction_ = 0;
	std::cout << name << " approaches ";
	std::cout << "(NinjaTrap name constructor has been called)" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
	std::cout << src.name_ << " has been duplicated ";
	std::cout << "(NinjaTrap copy constructor has been called)" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->name_ << " has left ";
	std::cout << "(NinjaTrap destructor has been called)" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag) const
{
	std::cout << "Ninja Shoebox FragTrap " << frag.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav) const
{
	std::cout << "Ninja Shoebox ScavTrap " << scav.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap) const
{
	std::cout << "Ninja Shoebox ClapTrap "  << clap.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja) const
{
	std::cout << "Ninja Shoebox NinjaTrap " << ninja.getName() << std::endl;
}
