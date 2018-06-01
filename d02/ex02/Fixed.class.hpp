/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:15:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/01 19:15:37 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class			Fixed
{
	public:
		Fixed(void);
		Fixed(int i);
		Fixed(float f);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed	&operator=(Fixed const &rhs);
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed			&min(Fixed &lhs, Fixed &rhs);
		static Fixed			&max(Fixed &lhs, Fixed &rhs);
		static const Fixed		&min(Fixed const &lhs, Fixed const &rhs);
		static const Fixed		&max(Fixed const &lhs, Fixed const &rhs);
	
	private:
		int					fixed_point_;
		static const int	fractional_bits_ = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &fi);

Fixed		&min(Fixed &lhs, Fixed &rhs);
Fixed		&max(Fixed &lhs, Fixed &rhs);
const Fixed	&min(Fixed const &lhs, Fixed const &rhs);
const Fixed	&max(Fixed const &lhs, Fixed const &rhs);

#endif
