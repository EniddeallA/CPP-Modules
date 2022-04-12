/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:10 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 18:31:49 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ):
	hitpoints(10),
	energy(10),
	damage(0)
{
	setName("");
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ):
	name(name),
	hitpoints(10),
	energy(10),
	damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& ct)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ct;	
}

ClapTrap& ClapTrap::operator = (const ClapTrap& ct)
{
	std::cout << "Assignement operator called" << std::endl;
	this->name = ct.getName();
	this->hitpoints = ct.gethitpoints();
	this->energy = ct.getEnergy();
	this->damage = ct.getDamage();
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy > 0)
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->damage << " points of damage!";
		std::cout << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	if (this->hitpoints < 0)
		this->hitpoints = 0;
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0)
	{
		this->hitpoints += amount;
		this->energy--;
		std::cout << "ClapTrap " << this->name << " repaired with " << amount << std::endl;
	}
}

std::string ClapTrap::getName( void ) const
{
	return this->name;
}

int ClapTrap::gethitpoints(void) const
{
	return this->hitpoints;
}

int ClapTrap::getEnergy(void) const
{
	return this->energy;
}

int ClapTrap::getDamage(void) const
{
	return this->damage;
}

void ClapTrap::setName( std::string name )
{
	this->name = name;
}

void ClapTrap::setAttrs( int hitpoints, int energy, int damage)
{
	this->hitpoints = hitpoints;
	this->energy = energy;
	this->damage = damage;
}