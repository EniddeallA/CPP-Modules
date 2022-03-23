/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:26:24 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 22:28:17 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal constructor called." << std::endl;
	setType("WrongAnimal");
}

WrongAnimal::WrongAnimal( const WrongAnimal& a )
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = a;
}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal& a )
{
	std::cout << "WrongAnimal Assignment operator called." << std::endl;
	this->type = a.getType();
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

std::string WrongAnimal::getType( void ) const
{
	return this->type;
}

void WrongAnimal::setType( std::string type )
{
	this->type = type;
}