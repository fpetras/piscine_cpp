/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:02:42 by fpetras           #+#    #+#             */
/*   Updated: 2018/05/30 18:48:52 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string name) : filename_(name)
{
	return ;
}

void		Logger::logToConsole(std::string message)
{
	std::cout << makeLogEntry(message) << std::endl;
}

void		Logger::logToFile(std::string message)
{
	std::ofstream ofs(this->filename_);
	ofs << makeLogEntry(message) << std::endl;
	ofs.close();
}

std::string	Logger::makeLogEntry(std::string message)
{
	time_t tt;
	struct tm *ti;

	time(&tt);
	ti = localtime(&tt);
	std::string log(asctime(ti));
	log.pop_back();
	log.append(" ");
	log.append(message);
	return log;
}

void		Logger::log(std::string const &dest, std::string const &message)
{
	void (Logger::*loggers[2])(std::string message) =
	{
		&Logger::logToConsole,
		&Logger::logToFile
	};

	for (int i = 0; i < 2; i++)
		if (destination[i].compare(dest) == 0)
			(this->*loggers[i])(message);
}
