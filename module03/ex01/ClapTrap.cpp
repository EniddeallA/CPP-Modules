/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:10 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 02:55:24 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ):
	name(name),
	health(10),
	energy(10),
	damage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name , int health, int energy, int damage):
	name(name),
	health(health),
	energy(energy),
	damage(damage)
{
	std::cout << "Attribute constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& ct)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ct;	
}

ClapTrap& ClapTrap::operator = (const ClapTrap& ct)
{
	std::cout << "Assignement operator called" << std::endl;
	this->name = ct.name;
	this->health = ct.health;
	this->energy = ct.energy;
	this->damage = ct.damage;
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName( void ) const
{
	return this->name;
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
	this->health -= amount;
	if (this->health < 0)
		this->health = 0;
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0)
	{
		this->health += amount;
		this->energy--;
		std::cout << "ClapTrap " << this->name << " repaired with " << amount << std::endl;
	}
}