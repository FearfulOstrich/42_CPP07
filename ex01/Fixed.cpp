/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:25:31 by antoine           #+#    #+#             */
/*   Updated: 2022/08/25 14:36:36 by aalleon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*==============================================================================
	Static attributes.
==============================================================================*/

const int	Fixed::_frac_bits = 8;

/*==============================================================================
	Constructors.
==============================================================================*/

Fixed::Fixed(void): _n(0)
{
	return ;
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
	return ;
}

Fixed::Fixed(int const n)
{
	this->_n = (n << this->_frac_bits);
	return ;
}

Fixed::Fixed(float const f)
{
	this->_n = (int)roundf(f * (1 << this->_frac_bits));
	return ;
}

/*==============================================================================
	Destructor.
==============================================================================*/

Fixed::~Fixed(void)
{
	return ;
}

/*==============================================================================
	Getters.
==============================================================================*/

int	Fixed::getRawBits(void) const
{
	return this->_n;
}

/*==============================================================================
	Setters.
==============================================================================*/

void	Fixed::setRawBits(const int n)
{
	this->_n = n;
	return ;
}

/*==============================================================================
	Conversions
==============================================================================*/

int	Fixed::toInt(void) const
{
	return ((int)(this->_n >> this->_frac_bits));
}

float	Fixed::toFloat(void) const
{
	return ((1.0f * this->_n) / (1 << this->_frac_bits));
}

/*==============================================================================
	Assignment operator.
==============================================================================*/

Fixed	&Fixed::operator=(Fixed const &other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

/*==============================================================================
	Arithmetic operator.
==============================================================================*/

Fixed	Fixed::operator+(Fixed const &other) const
{
	Fixed	res;

	res.setRawBits(this->getRawBits() + other.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	Fixed	res;

	res.setRawBits(this->getRawBits() - other.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	Fixed	res;

	res.setRawBits(this->getRawBits() * other.getRawBits() >> this->_frac_bits);
	return (res);
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	Fixed	res;

	res.setRawBits(this->getRawBits() / other.getRawBits() << this->_frac_bits);
	return (res);
}

/*==============================================================================
	Comparison operators.
==============================================================================*/

t_bool	Fixed::operator<(Fixed const &other) const
{
	return (this->_n < other.getRawBits());
}

t_bool	Fixed::operator>(Fixed const &other) const
{
	return (this->_n > other.getRawBits());
}

t_bool	Fixed::operator<=(Fixed const &other) const
{
	return (this->_n <= other.getRawBits());
}

t_bool	Fixed::operator>=(Fixed const &other) const
{
	return (this->_n >= other.getRawBits());
}

t_bool	Fixed::operator==(Fixed const &other) const
{
	return (this->_n == other.getRawBits());
}

t_bool	Fixed::operator!=(Fixed const &other) const
{
	return (this->_n != other.getRawBits());
}

/*==============================================================================
	Increment / Decrement operators.
==============================================================================*/

Fixed	&Fixed::operator++(void)
{
	this->_n++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	++*this;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	this->_n--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	--*this;
	return (temp);
}

/*==============================================================================
	Min / Max operators.
==============================================================================*/

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

/*==============================================================================
	ostream operators.
==============================================================================*/

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}
