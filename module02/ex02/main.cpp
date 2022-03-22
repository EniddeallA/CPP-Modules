/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:47:55 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 14:55:11 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;

	std::cout << "Additional tests:" << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << a / b << std::endl;
	std::cout << a * b << std::endl;

	std::cout << Fixed::min( a, b ) << std::endl;
	
	Fixed c = b;
	if (c == b)
		std::cout << "Equal." << std::endl;
	else
		std::cout << "Not equal." << std::endl;

	return 0;
}