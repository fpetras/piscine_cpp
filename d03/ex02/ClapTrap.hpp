/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:47:41 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 16:03:35 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <cwchar>

class					ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);

		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const &target);

		void		setName(std::string name);
		std::string	getName(void);

	protected:
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
