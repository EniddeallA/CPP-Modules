/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:19:07 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/28 16:19:51 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("cure")
{
	std::cout << "Ice constructor called." << std::endl;
}

Ice::Ice(const Ice& c):
	AMateria(c.type)
{
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice& Ice::operator = (const Ice& c)
{
	std::cout << "Ice Assignment operator called." << std::endl;
	(void)c;
	return (*this);
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor called." << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout 	<< "* shoots an ice bolt at "
				<< target.getName()
				<< " *" << std::endl;
}