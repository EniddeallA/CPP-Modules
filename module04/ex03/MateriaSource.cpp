/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:43:23 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/28 20:36:59 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource constructor called." << std::endl;
	materia[0] = 0;
	materia[1] = 0;
	materia[2] = 0;
	materia[3] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	std::cout << "MateriaSource copy constructor called." << std::endl;
	materia[0] = ms.materia[0]->clone();
	materia[1] = ms.materia[1]->clone();
	materia[2] = ms.materia[2]->clone();
	materia[3] = ms.materia[3]->clone();
}

MateriaSource& MateriaSource::operator = (const MateriaSource& ms)
{
	std::cout << "MateriaSource Assignement operator called." << std::endl;
	materia[0] = ms.materia[0]->clone();
	materia[1] = ms.materia[1]->clone();
	materia[2] = ms.materia[2]->clone();
	materia[3] = ms.materia[3]->clone();
	return (*this);
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource destructor called." << std::endl;
}


void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
		if (materia[i] == 0)
		{
			materia[i] = m->clone();
			break;
		}
	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] && materia[i]->getType() == type)
		{
			return materia[i]->clone();
		}
	}
	return 0;
}

