/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:28:42 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/26 22:32:45 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat( const WrongCat& a ): WrongAnimal(a.type)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = a;
}

WrongCat& WrongCat::operator = ( const WrongCat& a )
{
	std::cout << "WrongCat Assignment operator called." << std::endl;
	this->type = a.type;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat sound." << std::endl;
}