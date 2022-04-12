/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:43:31 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 18:31:49 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ):
	ClapTrap( name )
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->setAttrs(100, 50 , 20);
}

ScavTrap::ScavTrap( const ScavTrap& ct) : ClapTrap( ct.getName() )
{
	std::cout << "Copy constructor called" << std::endl;
	this->setAttrs(ct.gethitpoints(), ct.getEnergy(), ct.getDamage());
}

ScavTrap& ScavTrap::operator = (const ScavTrap& ct)
{
	std::cout << "Assignement operator called" << std::endl;
	this->setName(ct.getName());
	this->setAttrs(ct.gethitpoints(), ct.getEnergy(), ct.getDamage());
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout   << "ScavTrap " << this->getName() 
                << " attacks " << target 
                << ", causing " << this->getDamage()
                << " points of damage!" << std::endl;
}