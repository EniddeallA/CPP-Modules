/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:38:26 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 03:43:45 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ):
	ClapTrap( name )
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->setAttrs(100, 100 , 30);
}

FragTrap::FragTrap( const FragTrap& ct) : ClapTrap( ct.getName() )
{
	std::cout << "Copy constructor called" << std::endl;
	this->setAttrs(ct.getHealth(), ct.getEnergy(), ct.getDamage());
}

FragTrap& FragTrap::operator = (const FragTrap& ct)
{
	std::cout << "Assignement operator called" << std::endl;
	this->setName(ct.getName());
	this->setAttrs(ct.getHealth(), ct.getEnergy(), ct.getDamage());
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->getName() << " is requesting a high five!" << std::endl;
}
