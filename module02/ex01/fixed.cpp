/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:47:56 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/20 14:06:16 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"


Fixed::Fixed( void ):
	fixedPoint(0)
{
	std::cout << "\033[1;32mDefault constructor called\033[0m" << std::endl;
}

// Fixed::Fixed( const int number );
// Fixed::Fixed( const float number );

Fixed::Fixed( const Fixed& f )
{
	std::cout << "\033[1;32mCopy constructor called\033[0m" << std::endl;
	*this = f;
}

Fixed& Fixed::operator=(const Fixed& f )
{
	std::cout << "\033[1;32mCopy assignment operator called\033[0m" << std::endl;
	this->fixedPoint = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "\033[1;31mDefault constructor called\033[0m" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

std::ostream& operator<<(std::ostream &output, const Fixed& f)
{
	output << f.getRawBits();
	return (output);
}
