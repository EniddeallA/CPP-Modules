/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:20:41 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/28 16:51:12 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name):
	name(name)
{
	std::cout << "Character constructor called." << std::endl;
	materia[0] = 0;
	materia[1] = 0;
	materia[2] = 0;
	materia[3] = 0;
}

Character::Character(const Character& c):
	name(c.name)
{
	std::cout << "Character copy constructor called." << std::endl;
	materia[0] = c.materia[0]->clone();
	materia[1] = c.materia[1]->clone();
	materia[2] = c.materia[2]->clone();
	materia[3] = c.materia[3]->clone();
}

Character& Character::operator = (const Character& c)
{
	std::cout << "Character assignement operator called." << std::endl;
	this->name = c.name;
	materia[0] = c.materia[0]->clone();
	materia[1] = c.materia[1]->clone();
	materia[2] = c.materia[2]->clone();
	materia[3] = c.materia[3]->clone();
	return (*this);
}

Character::~Character()
{
	std::cout << "Character desstructor called." << std::endl;
}


std::string const& Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
		if (!materia[i])
		{
			materia[i] = m;
			break;
		}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	int i = idx + 1;
	while (i < 4)
	{
		materia[i - 1] = materia[i];
		i++;
	}
	materia[3] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < 0 || idx > 3 || !materia[idx])
		return;
	materia[idx]->use(target);
}
