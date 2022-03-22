/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:47:51 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 01:43:21 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed& f );
		Fixed& operator=(const Fixed& f );
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int fixedPoint;
		static const int nFraction = 8;	
};


#endif