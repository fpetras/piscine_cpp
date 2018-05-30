/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:43:17 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 17:39:08 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>

static const	std::string action_names[4] =
{
	"meleeAttack",
	"rangedAttack",
	"intimidatingShout"
};

class			Human
{
	public:
		void	action(std::string const &action_name,
				std::string const &target);

	private:
		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	intimidatingShout(std::string const &target);
};

# endif
