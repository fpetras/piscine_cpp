/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 23:23:52 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 23:39:27 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void	announce(void);

	private:
		Zombie *horde;
};

#endif
