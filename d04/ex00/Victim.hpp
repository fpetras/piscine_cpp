/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 07:37:19 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/03 08:17:11 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>

class			Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim const &src);
		~Victim(void);

		Victim	&operator=(Victim const &rhs);

		std::string		getName(void) const;

		void			introduce(void) const;
		virtual void	getPolymorphed(void) const;

	private:
		std::string name_;
};

std::ostream	&operator<<(std::ostream &o, Victim const &rhs);

#endif
