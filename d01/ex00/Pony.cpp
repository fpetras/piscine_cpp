/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 20:50:02 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 21:14:49 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string type) : name_(type)
{
	std::cout << "My little " << type << " pony is born" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "My little " << this->name_ << " pony has died" << std::endl;
}

void	ponyOnTheHeap(void)
{
	Pony *heap_pony = new Pony("heap");
	delete heap_pony;
}

void	ponyOnTheStack(void)
{
	Pony stack_pony = Pony("stack");
}
