/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:26:24 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/26 22:33:35 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ):
	type(type)
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& a ):
	type(a.type)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal& a )
{
	std::cout << "WrongAnimal Assignment operator called." << std::endl;
	this->type = a.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal sound." << std::endl;
}

std::string WrongAnimal::getWrongType( void ) const
{
	return this->type;
}