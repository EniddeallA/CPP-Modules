/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:04:38 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/28 20:17:09 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):
	type(type)
{
	std::cout << "AMateria constructor called." << std::endl;
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
	return this->type;
}
