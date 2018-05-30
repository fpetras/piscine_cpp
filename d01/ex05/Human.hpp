/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 01:40:36 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 08:16:54 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class				Human
{
	public:
		const std::string	identify(void) const;
		const Brain	&getBrain(void) const;

	private:
		const Brain	brain_;
};

#endif
