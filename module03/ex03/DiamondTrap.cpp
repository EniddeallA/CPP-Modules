/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:48:07 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 03:56:14 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ):
	ScavTrap( name ),
	FragTrap( name )
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	ClapTrap::setName(name + " _clap_name");
	this->name = name;
	setAttrs(FragTrap::getHealth(), ScavTrap::getEnergy() , FragTrap::getDamage());
}

DiamondTrap::DiamondTrap( const DiamondTrap& ct) : ClapTrap( ct.getName() )
{
	std::cout << "Copy constructor called" << std::endl;
	this->setAttrs(ct.getHealth(), ct.getEnergy(), ct.getDamage());
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& ct)
{
	std::cout << "Assignement operator called" << std::endl;
	this->setName(ct.getName());
	this->setAttrs(ct.getHealth(), ct.getEnergy(), ct.getDamage());
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::highFivesGuys( void )
{
	std::cout << "DiamondTrap " << this->getName() << " is requesting a high five!" << std::endl;
}
