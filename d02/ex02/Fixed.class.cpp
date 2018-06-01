/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:22:02 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/01 19:11:43 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : fixed_point_(0)
{
	return ;
}

Fixed::Fixed(int i) : fixed_point_(i << this->fractional_bits_)
{
	return ;
}

Fixed::Fixed(float f) : fixed_point_(roundf(f * (1 << fractional_bits_)))
{
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->fixed_point_ = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->fixed_point_ > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->fixed_point_ < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->fixed_point_ >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->fixed_point_ <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->fixed_point_ == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->fixed_point_ != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->fixed_point_++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed copy(*this);
	operator++();
	return copy;
}

Fixed	&Fixed::operator--(void)
{
	this->fixed_point_--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed copy(*this);
	operator--();
	return copy;
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

Fixed			&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return (lhs.getRawBits() > rhs.getRawBits() ? rhs : lhs);
}

Fixed			&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return (rhs.getRawBits() > lhs.getRawBits() ? rhs : lhs);
}

const Fixed		&Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	return (lhs.getRawBits() > rhs.getRawBits() ? rhs : lhs);
}

const Fixed		&Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	return (rhs.getRawBits() > lhs.getRawBits() ? rhs : lhs);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fi)
{
	return (o << fi.toFloat());
}

Fixed			&min(Fixed &lhs, Fixed &rhs)
{
	return (lhs.getRawBits() > rhs.getRawBits() ? rhs : lhs);
}

Fixed			&max(Fixed &lhs, Fixed &rhs)
{
	return (rhs.getRawBits() > lhs.getRawBits() ? rhs : lhs);
}

const Fixed		&min(Fixed const &lhs, Fixed const &rhs)
{
	return (lhs.getRawBits() > rhs.getRawBits() ? rhs : lhs);
}

const Fixed		&max(Fixed const &lhs, Fixed const &rhs)
{
	return (rhs.getRawBits() > lhs.getRawBits() ? rhs : lhs);
}
