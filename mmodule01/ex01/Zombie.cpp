/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 04:17:21 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 08:13:31 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{}

Zombie::Zombie( std::string name ):name(name)
{}

Zombie::~Zombie( void )
{
		std::cout << "\033[1;31m" << this->name << " got destroyed\033[0m" << std::endl;
}

std::string Zombie::getName( void )
{
	return this->name;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name )
{
	this->name = name;
}