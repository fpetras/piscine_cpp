/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 04:47:41 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/02 22:22:17 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_H
# define NINJA_TRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class			NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &src);
		~NinjaTrap(void);

		void	ninjaShoebox(ClapTrap &clap) const;
		void	ninjaShoebox(FragTrap &frag) const;
		void	ninjaShoebox(ScavTrap &scav) const;
		void	ninjaShoebox(NinjaTrap &ninja) const;
};

#endif
