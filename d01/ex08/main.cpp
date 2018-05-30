/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:19:08 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 17:26:36 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human person;

	person.action("meleeAttack", "Someone");
	person.action("rangedAttack", "Someone else");
	person.action("intimidatingShout", "Someone else entirely");
	return (0);
}
