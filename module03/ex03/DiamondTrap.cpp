/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:48:07 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 17:35:24 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ):
	ScavTrap( name ),
	FragTrap( name )
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	ClapTrap::setName(name + "_clap_name");
	this->name = name;
	setAttrs(FragTrap::getHealth(), ScavTrap::getEnergy() , FragTrap::getDamage());
}

DiamondTrap::DiamondTrap( const DiamondTrap& ct):
	ScavTrap( ct.getName() ),
	FragTrap( ct.getName() )
{
	std::cout << "Copy constructor called" << std::endl;
	ClapTrap::setName(name + "_clap_name");
	this->name = ct.getName();
	this->setAttrs(FragTrap::getHealth(), ScavTrap::getEnergy(), FragTrap::getDamage());
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::guardGate( void )
{
	std::cout << "DiamondTrap " << this->getName() << " is now in Gate Keeper mode" << std::endl;
}

void DiamondTrap::highFivesGuys( void )
{
	std::cout << "DiamondTrap " << this->getName() << " is requesting a high five!" << std::endl;
}

void DiamondTrap::whoAmI( void )
{
	std::cout 	<< "DiamondTrap's Name: " << this->name 
				<< ". DiamondTrap's ClapTrap Name: " << this->getName() 
				<< std::endl;
}