/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 07:30:51 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/03 07:37:16 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include "Victim.hpp"
# include <iostream>

class			Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer(void);

		Sorcerer	&operator=(Sorcerer const &rhs);

		std::string	getName(void) const;
		std::string	getTitle(void) const;

		void		polymorph(Victim const &) const;

	private:
		std::string name_;
		std::string title_;
};

std::ostream		&operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
