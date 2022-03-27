/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:40 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/26 22:34:06 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal( std::string type ):
	type(type)
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal( const Animal& a ):
	type(a.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator = ( const Animal& a )
{
	std::cout << "Animal Assignment operator called." << std::endl;
	this->type = a.type;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound( void ) const
{
	std::cout << "Animal sound." << std::endl;
}

std::string Animal::getType( void ) const
{
	return this->type;
}