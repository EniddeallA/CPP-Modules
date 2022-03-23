/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:28:42 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 22:28:59 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat constructor called." << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat( const WrongCat& a )
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = a;
}

WrongCat& WrongCat::operator = ( const WrongCat& a )
{
	std::cout << "WrongCat Assignment operator called." << std::endl;
	this->type = a.getType();
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

std::string WrongCat::getType( void ) const
{
	return this->type;
}

void WrongCat::setType( std::string type )
{
	this->type = type;
}