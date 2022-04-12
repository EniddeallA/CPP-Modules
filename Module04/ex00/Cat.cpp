/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:40 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 21:26:15 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat( const Cat& a ): Animal(a.type)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = a.type;
}

Cat& Cat::operator = ( const Cat& a )
{
	std::cout << "Cat Assignment operator called." << std::endl;
	this->type = a.type;
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << "Cat sound." << std::endl;
}