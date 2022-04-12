/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:47:51 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 14:24:26 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{	
	public:
		Fixed( void );
		Fixed( const int number );
		Fixed( const float number );
		Fixed( const Fixed& f );
		~Fixed();

		Fixed& operator = (const Fixed& f );

		Fixed operator + (const Fixed& f ) const;
		Fixed operator - (const Fixed& f ) const;
		Fixed operator * (const Fixed& f ) const;
		Fixed operator / (const Fixed& f ) const;
		
		Fixed& operator ++ ( void ); /* Pre-Increment */
		Fixed& operator -- ( void ); /* Pre-Decrement */
		Fixed  operator ++ ( int ); /* Post-Increment */
		Fixed  operator -- ( int ); /* Post-De	crement */

		bool operator == (const Fixed& f ) const;
		bool operator != (const Fixed& f ) const;		
		bool operator >  (const Fixed& f ) const;
		bool operator <  (const Fixed& f ) const;
		bool operator >= (const Fixed& f ) const;
		bool operator <= (const Fixed& f ) const;

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
		static Fixed& min( Fixed& f1, Fixed& f2);
		static Fixed& max( Fixed& f1, Fixed& f2);
	private:
		int number;
		static const int fractional_bits = 8;	
};

std::ostream& operator<<(std::ostream &output, const Fixed& f);

#endif