/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:02:25 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 09:21:51 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"

class				HumanB
{
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &weapon);

	private:
		std::string name_;
		Weapon		*weaponPtr_;
};

#endif
