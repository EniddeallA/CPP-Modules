/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:09:15 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 12:03:45 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ){}

HumanB::HumanB( std::string name ):
	name(name)
{}

HumanB::~HumanB( void ){}

void HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}

void HumanB::attack( void )
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon->getType() << std::endl;
}