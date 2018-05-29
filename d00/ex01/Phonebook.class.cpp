/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:18:13 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 18:08:38 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void				Phonebook::add_contact(void)
{
	std::cout << "Enter your first name:\n";
	std::getline(std::cin, this->first_name_);
	std::cout << "Enter your last name:\n";
	std::getline(std::cin, this->last_name_);
	std::cout << "Enter your nickname:\n";
	std::getline(std::cin, this->nickname_);
	std::cout << "Enter your login:\n";
	std::getline(std::cin, this->login_);
	std::cout << "Enter your postal address:\n";
	std::getline(std::cin, this->postal_address_);
	std::cout << "Enter your email address:\n";
	std::getline(std::cin, this->email_address_);
	std::cout << "Enter your phone number:\n";
	std::getline(std::cin, this->phone_number_);
	std::cout << "Enter your birthday:\n";
	std::getline(std::cin, this->birthday_date_);
	std::cout << "Enter your favorite meal:\n";
	std::getline(std::cin, this->favorite_meal_);
	std::cout << "Enter your underwear color:\n";
	std::getline(std::cin, this->underwear_color_);
	std::cout << "Enter your darkest secret:\n";
	std::getline(std::cin, this->darkest_secret_);
	std::cout << "Your information has been saved!" << std::endl;
}

static std::string	trunc(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void				Phonebook::display_contact_short(int index)
{
	if (index == 0)
	{
		std::cout << "___________________________________________\n";
		std::cout << "     INDEX|      NAME| LAST NAME|  NICKNAME\n";
	}
	std::cout << std::right << std::setw(10) << index << "|";
	std::cout << std::right << std::setw(10) << trunc(this->first_name_) << "|";
	std::cout << std::right << std::setw(10) << trunc(this->last_name_) << "|";
	std::cout << std::right << std::setw(10) << trunc(this->nickname_) <<
	std::endl;
}

void				Phonebook::display_contact_long(void)
{
	std::cout << "First name:      " << this->first_name_ << '\n';
	std::cout << "Last name:       " << this->last_name_ << '\n';
	std::cout << "Nickname:        " << this->nickname_ << '\n';
	std::cout << "Login:           " << this->login_ << '\n';
	std::cout << "Postal address:  " << this->postal_address_ << '\n';
	std::cout << "Email address:   " << this->email_address_ << '\n';
	std::cout << "Phone number:    " << this->phone_number_ << '\n';
	std::cout << "Date of birth:   " << this->birthday_date_ << '\n';
	std::cout << "Favorite meal:   " << this->favorite_meal_ << '\n';
	std::cout << "Underwear color: " << this->underwear_color_ << '\n';
	std::cout << "Darkest secret:  " << this->darkest_secret_  << std::endl;
}
