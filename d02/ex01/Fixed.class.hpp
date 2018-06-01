/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 16:15:54 by fpetras           #+#    #+#             */
/*   Updated: 2018/06/01 17:18:14 by fpetras          ###   ########.fr       */
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
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
	
	private:
		int					fixed_point_;
		static const int	fractional_bits_ = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &fi);

#endif
