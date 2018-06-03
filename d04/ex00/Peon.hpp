/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 07:41:26 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/03 08:29:23 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include "Victim.hpp"

class 	Peon : public Victim
{
	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon const &src);
		~Peon(void);

		virtual void	getPolymorphed(void) const;
};

std::ostream	&operator<<(std::ostream &o, Peon const &rhs);

#endif
