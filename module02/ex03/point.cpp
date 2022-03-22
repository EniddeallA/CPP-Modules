/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:23:41 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 01:08:55 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ):
	x(Fixed(0)),
	y(Fixed(0))
{}

Point::Point( const Point& p):
	x(Fixed(p.getFixedX())),
	y(Fixed(p.getFixedY()))
{}

Point::Point( const float n1, const float n2):
	x(Fixed(n1)),
	y(Fixed(n2))
{}

const Point& Point::operator = ( const Point& p)
{
	Fixed& _x = const_cast<Fixed&>(this->x);
	Fixed& _y = const_cast<Fixed&>(this->y);
	_x.setRawBits( p.getFixedX().getRawBits() );
	_y.setRawBits( p.getFixedY().getRawBits() );
	return (*this);
}

Point::~Point( void ){}

const Fixed Point::getFixedX( void ) const
{
	return this->x;
}
const Fixed Point::getFixedY( void ) const
{
	return this->y;
}