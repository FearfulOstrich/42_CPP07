/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:48:34 by antoine           #+#    #+#             */
/*   Updated: 2022/08/04 17:21:53 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>
# include <cmath>

typedef int	t_bool;

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &other);
		Fixed(int const n);
		Fixed(float const f);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// assignment operator
		Fixed	&operator=(Fixed const &other);

		// arithmetic operators
		Fixed	operator+(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;
		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;

		// comparison operators
		t_bool	operator<(Fixed const &other) const;
		t_bool	operator>(Fixed const &other) const;
		t_bool	operator<=(Fixed const &other) const;
		t_bool	operator>=(Fixed const &other) const;
		t_bool	operator==(Fixed const &other) const;
		t_bool	operator!=(Fixed const &other) const;

		// incrementation/decrementation operators
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		// min max operators
		static Fixed		&min(Fixed &f1, Fixed &f2);
		static Fixed const	&min(Fixed const &f1, Fixed const &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		static Fixed const	&max(Fixed const &f1, Fixed const &f2);

	private:
		int					_n;
		static int const	_frac_bits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif
