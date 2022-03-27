/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:40 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 21:26:15 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog( const Dog& a ): Animal(a.type)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator = ( const Dog& a )
{
	std::cout << "Dog Assignment operator called." << std::endl;
	this->type = a.type;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Dog sound." << std::endl;
}