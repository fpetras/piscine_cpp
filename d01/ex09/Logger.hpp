/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:58:00 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 18:34:02 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H

# include <iostream>
# include <fstream>
# include <ctime>

static const std::string destination[2] =
{
	"console",
	"file"
};

class				Logger
{
	public:
		Logger(std::string name);
		void		log(std::string const &dest, std::string const &message);

	private:
		void		logToConsole(std::string log);
		void		logToFile(std::string log);
		std::string	filename_;
		std::string	makeLogEntry(std::string message);
};

#endif
