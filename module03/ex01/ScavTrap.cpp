/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:43:31 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 02:57:09 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ):
	ClapTrap( name, 100 , 50 , 20 )
{
	std::cout << "Constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& ct) : ClapTrap( ct )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ct;	
}

ScavTrap& ScavTrap::operator = (const ScavTrap& ct)
{
	std::cout << "Assignement operator called" << std::endl;
	this->name = ct.name;
	this->health = ct.health;
	this->energy = ct.energy;
	this->damage = ct.damage;
	return (*this);
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode" << std::endl;
}