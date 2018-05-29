/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:19:53 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 18:38:40 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

static void	error_message(int errnum)
{
	if (errnum == 1)
		std::cerr <<
		"\033[1;31mError:\033[0m Maximum number of contacts reached" <<
		std::endl;
	else if (errnum == 2)
		std::cout << "\033[1;31mError:\033[0m Invalid index" << std::endl;
	else if (errnum == 3)
		std::cerr << "\033[1;31mError:\033[0m No contacts" << std::endl;

}

static void	display_commands(void)
{
	std::cout << "commands: \033[1;37mADD\033[0m to add a contact\n";
	std::cout << "          \033[1;37mSEARCH\033[0m to search contacts\n";
	std::cout << "          \033[1;37mEXIT\033[0m to exit the program" <<
	std::endl;
}

int			main(void)
{
	Phonebook	contact[8];
	std::string	command;
	std::string index;
	int			i;
	int			k;

	i = -1;
	display_commands();
	do
	{
		command.clear();
		std::cout << "map> ";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			if (i < 7)
				contact[++i].add_contact();
			else
				error_message(1);
		else if (command.compare("SEARCH") == 0)
		{
			if (i > -1)
			{
				for (int j = 0; j <= i; j++)
					contact[j].display_contact_short(j);
				std::cout << "Enter a contact's index:\n";
				std::cout << "map> ";
				std::getline(std::cin, index);
				std::stringstream nb(index);
				if (!(nb >> k) || k < 0 || k > i)
					error_message(2);
				else	
					contact[k].display_contact_long();
			}
			else
				error_message(3);
		}
		else if (command.compare("clear") == 0)
		{
			system("clear");
			display_commands();
		}
	} while (command.compare("EXIT") != 0);
	return (0);
}
