/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:22:02 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/01 17:27:58 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : fixed_point_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int i) : fixed_point_(i << this->fractional_bits_)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float f) : fixed_point_(roundf(f * (1 << fractional_bits_)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point_ = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return this->fixed_point_;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point_ = raw;
}

int		Fixed::toInt(void) const
{
	return (fixed_point_ / (1 << fractional_bits_));
}

float	Fixed::toFloat(void) const
{
	return (fixed_point_ / (float)(1 << this->fractional_bits_));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fi)
{
	return (o << fi.toFloat());
}
