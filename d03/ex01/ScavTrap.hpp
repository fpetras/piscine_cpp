/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:47:41 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 09:05:40 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include "FragTrap.hpp"

class					ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const &target);

		void		setName(std::string name);
		std::string	getName(void);

	private:
		int			hitPoints_;
		int			maxHitPoints_;
		int			energyPoints_;
		int			maxEnergyPoints_;
		int			level_;
		std::string	name_;
		int			meleeAttackDamage_;
		int			rangedAttackDamage_;
		int			armorDamageReduction_;
};

#endif
