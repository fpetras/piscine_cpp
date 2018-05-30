/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:58:43 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 09:20:30 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"

class 				HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);

	private:
		std::string	name_;
		Weapon		&weaponRef_;
};

#endif
