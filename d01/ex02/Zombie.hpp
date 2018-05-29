/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 21:38:58 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 23:18:19 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <random>

class				Zombie
{
	public:
		Zombie(std::string type, std::string name);
		~Zombie(void);
		void announce(void);

	private:
		std::string	type_;
		std::string	name_;
};

#endif
