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
	this->brain = new Brain(); 
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog( const Dog& a ): Animal(a.type)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = a.brain->ideas[i];
}

Dog& Dog::operator = ( const Dog& a )
{
	std::cout << "Dog Assignment operator called." << std::endl;
	this->type = a.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(a.brain));
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
	delete brain;
}

void Dog::makeSound( void ) const
{
	std::cout << "Dog sound." << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->brain;
}