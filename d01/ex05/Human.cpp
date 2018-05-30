/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 07:49:37 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 08:16:44 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const std::string	Human::identify(void) const
{
	std::string 		address;
	std::stringstream	ss;

	ss << &brain_;
	address = ss.str();
	return address;
}

const Brain			&Human::getBrain(void) const
{
	return brain_;
}
