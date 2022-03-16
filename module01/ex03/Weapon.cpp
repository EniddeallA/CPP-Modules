/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:09:21 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/15 09:57:16 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ){}

Weapon::Weapon( std::string type ):type(type){}

Weapon::~Weapon( void ){}

std::string Weapon::getType( void )
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}