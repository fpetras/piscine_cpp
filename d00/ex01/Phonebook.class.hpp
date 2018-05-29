/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 09:52:36 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/29 14:46:42 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include <sstream>

class				Phonebook
{
	public:
		void		add_contact(void);
		void		display_contact_short(int index);
		void		display_contact_long(void);

	private:
		std::string	first_name_;
		std::string	last_name_;
		std::string	nickname_;
		std::string	login_;
		std::string	postal_address_;
		std::string	email_address_;
		std::string	phone_number_;
		std::string	birthday_date_;
		std::string	favorite_meal_;
		std::string	underwear_color_;
		std::string	darkest_secret_;
};

#endif
