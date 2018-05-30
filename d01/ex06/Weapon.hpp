/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:50:22 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 09:12:41 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class						Weapon
{
	public:
		Weapon(std::string type);
		const std::string	&getType(void);
		void				setType(std::string type);

	private:
		std::string			 type_;
};

#endif
