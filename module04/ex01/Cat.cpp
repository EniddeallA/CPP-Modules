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
	this->brain = new Brain();
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat( const Cat& a ): Animal(a.type)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = a.type;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = a.brain->ideas[i];
}

Cat& Cat::operator = ( const Cat& a )
{
	std::cout << "Cat Assignment operator called." << std::endl;
	this->type = a.type;
	if (brain)
		delete brain;
	brain = new Brain(*(a.brain));
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
	delete brain;
}

void Cat::makeSound( void ) const
{
	std::cout << "Cat sound." << std::endl;
}

Brain* Cat::getBrain( void ) const
{
	return this->brain;
}