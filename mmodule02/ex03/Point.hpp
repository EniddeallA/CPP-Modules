/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:33:35 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 01:04:00 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		Point( const float n1, const float n2);
		Point( const Point& p);
		const Point& operator = ( const Point& p);
		~Point( void );

		const Fixed getFixedX( void ) const;
		const Fixed getFixedY( void ) const;
		
	private:
		const Fixed x;
		const Fixed y;
};

#endif