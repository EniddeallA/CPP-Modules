/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:47:56 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 14:24:26 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed( void ):
	number(0)
{}

Fixed::Fixed( const int number )
{
	this->number = number << this->fractional_bits;
}

Fixed::Fixed( const float number )
{
	this->number = roundf(number * (1 << this->fractional_bits));
}

Fixed::Fixed( const Fixed& f )
{
	*this = f;
}

Fixed& Fixed::operator=(const Fixed& f )
{
	this->number = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{}

int Fixed::getRawBits( void ) const
{
	return this->number;
}

void Fixed::setRawBits( int const raw )
{
	this->number = raw;
}

float	Fixed::toFloat( void ) const {
	return (float)this->number / (float)(1 << this->fractional_bits);
}

int		Fixed::toInt( void ) const {
	return this->number >> this->fractional_bits;
}

std::ostream& operator<<(std::ostream &output, const Fixed& f)
{
	output << f.toFloat();
	return output;
}

Fixed Fixed::operator + (const Fixed& f ) const
{
	Fixed f1;
	f1.setRawBits(this->number + f.number);
	return f1;
}

Fixed Fixed::operator - (const Fixed& f ) const
{
	Fixed f1;
	f1.setRawBits(this->number - f.number);
	return f1;
}

Fixed Fixed::operator * (const Fixed& f ) const
{
	Fixed f1;
	f1.setRawBits((this->number * f.number) >> this->fractional_bits);
	return f1;
}

Fixed Fixed::operator / (const Fixed& f ) const
{
	Fixed f1;
	f1.setRawBits((this->number << this->fractional_bits) / f.number);
	return f1;
}

Fixed& Fixed::operator ++ ( void )
{
	this->number++;
	return (*this);
}

Fixed& Fixed::operator -- ( void )
{
	this->number--;
	return (*this);
}

Fixed  Fixed::operator ++ ( int )
{
	Fixed f(*this);
	this->number++;
	return (f);
}

Fixed  Fixed::operator -- ( int )
{
	Fixed f(*this);
	this->number--;
	return (f);
}

bool Fixed::operator == (const Fixed& f ) const
{
	return (this->number == f.number);
}

bool Fixed::operator != (const Fixed& f ) const
{
	return (this->number != f.number);
}

bool Fixed::operator >  (const Fixed& f ) const
{
	return (this->number > f.number);
}

bool Fixed::operator <  (const Fixed& f ) const
{
	return (this->number < f.number);
}

bool Fixed::operator >= (const Fixed& f ) const
{
	return (this->number >= f.number);
}

bool Fixed::operator <= (const Fixed& f ) const
{
	return (this->number <= f.number);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

Fixed& Fixed::min( Fixed& f1, Fixed& f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

Fixed& Fixed::max( Fixed& f1, Fixed& f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

Fixed Fixed::abs( Fixed& f )
{
	if (f < 0)
		return (f * - 1);
	return (f);
}

const Fixed Fixed::abs( const Fixed& f )
{
	if (f < 0)
		return (f * - 1);
	return (f);
}