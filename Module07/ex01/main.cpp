/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 04:13:16 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/10 00:11:54 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x )
{ 
	std::cout << x << std::endl;
	return; 
}

int main( void )
{
	int arr[] = {0,1,2,3,4};
	::iter( arr, 5, print );

	std::cout << std::endl;

	Awesome tab[5];
	::iter( tab, 5, print );

	std::cout << std::endl;
	
	std::string str_arr[3] = {"hello", "world" , "!"};
	::iter(str_arr, 3, print);
}