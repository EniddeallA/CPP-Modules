/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:47:56 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 14:30:57 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ):
	number(0)
{
	std::cout << "\033[1;32mDefault constructor called\033[0m" << std::endl;
}

Fixed::Fixed( const int number )
{
	std::cout << "\033[1;32mIntger constructor called\033[0m" << std::endl;
	this->number = number  * (1 << this->fractional_bits);
}

Fixed::Fixed( const float number )
{
	std::cout << "\033[1;32mFloat constructor called\033[0m" << std::endl;
	this->number = roundf(number * (1 << this->fractional_bits));
}	

Fixed::Fixed( const Fixed& f )
{
	std::cout << "\033[1;32mCopy constructor called\033[0m" << std::endl;
	*this = f;
}

Fixed& Fixed::operator=(const Fixed& f )
{
	std::cout << "\033[1;32mCopy assignment operator called\033[0m" << std::endl;
	this->number = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "\033[1;31mDestructor called\033[0m" << std::endl;
}

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
	return this->number / (1 << this->fractional_bits);
}

std::ostream& operator<<(std::ostream &output, const Fixed& f)
{
	output << f.toFloat();
	return output;
}
