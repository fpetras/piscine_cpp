/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 20:47:34 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 21:14:23 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class			Pony
{
	public:
		Pony(std::string);
		~Pony(void);

	private:
		std::string name_;
};

void	ponyOnTheHeap(void);
void	ponyOnTheStack(void);

#endif
