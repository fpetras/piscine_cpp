/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 01:50:33 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 08:16:19 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

const std::string	Brain::identify(void) const
{
	std::string 		address;
	std::stringstream	ss;
	ss << this;
	address = ss.str();
	return address;
}
