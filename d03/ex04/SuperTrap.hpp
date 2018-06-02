/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:47:41 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 22:52:24 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_H
# define SUPER_TRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class			SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &src);
		~SuperTrap(void);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);

		void	vaulthunter_dot_exe(std::string const &target);

		void	ninjaShoebox(ClapTrap &clap) const;
		void	ninjaShoebox(FragTrap &frag) const;
		void	ninjaShoebox(ScavTrap &scav) const;
		void	ninjaShoebox(NinjaTrap &ninja) const;
};

#endif
