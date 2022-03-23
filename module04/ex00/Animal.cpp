/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:40 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 22:18:15 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal constructor called." << std::endl;
	setType("Animal");
}

Animal::Animal( const Animal& a )
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = a;
}

Animal& Animal::operator = ( const Animal& a )
{
	std::cout << "Animal Assignment operator called." << std::endl;
	this->type = a.getType();
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

void Animal::setType( std::string type )
{
	this->type = type;
}