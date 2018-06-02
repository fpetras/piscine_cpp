/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:59:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 23:00:16 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : FragTrap(), NinjaTrap()
{
	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 120;
	this->maxEnergyPoints_ = 120;
	this->level_ = 1;
	this->name_ = "Nameless player";
	this->meleeAttackDamage_ = 60;
	this->rangedAttackDamage_ = 20;
	this->armorDamageReduction_ = 5;
	std::cout << "A SuperTrap came into existence ";
	std::cout << "(SuperTrap default constructor has been called)" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(), NinjaTrap()
{
	this->hitPoints_ = 100;
	this->maxHitPoints_ = 100;
	this->energyPoints_ = 120;
	this->maxEnergyPoints_ = 120;
	this->level_ = 1;
	this->name_ = name;
	this->meleeAttackDamage_ = 60;
	this->rangedAttackDamage_ = 20;
	this->armorDamageReduction_ = 5;
	std::cout << name << " came into existence ";
	std::cout << "(SuperTrap name constructor has been called)" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src) : FragTrap(name_), NinjaTrap(name_)
{
	*this = src;
	std::cout << src.name_ << " has been replicated ";
	std::cout << "(SuperTrap copy constructor has been called)" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << name_ << " ceased to exist ";
	std::cout << "(SuperTrap destructor has been called)" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::vaulthunter_dot_exe(std::string const &target)
{
	FragTrap::vaulthunter_dot_exe(target);
}

void	SuperTrap::ninjaShoebox(FragTrap &target) const
{
	NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(ScavTrap &target) const
{
	NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(ClapTrap &target) const
{
	NinjaTrap::ninjaShoebox(target);
}

void	SuperTrap::ninjaShoebox(NinjaTrap &target) const
{
	NinjaTrap::ninjaShoebox(target);
}
