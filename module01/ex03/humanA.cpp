/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:09:23 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 12:03:46 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ):
	name(name),
	weapon(weapon)
{}

HumanA::~HumanA( void ){}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}