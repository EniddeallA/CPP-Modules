/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:09:25 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/28 20:18:42 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{
	std::cout << "Cure constructor called." << std::endl;
}

Cure::Cure(const Cure& c):
	AMateria(c.type)
{
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure& Cure::operator = (const Cure& c)
{
	std::cout << "Cure Assignment operator called." << std::endl;
	(void)c;
	return (*this);
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called." << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout 	<< "* heals "<< target.getName()
				<< "'s wounds *" << std::endl;
}