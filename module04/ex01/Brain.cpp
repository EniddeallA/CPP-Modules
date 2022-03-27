/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 22:35:49 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/27 15:57:36 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructed." << std::endl;
}

Brain::Brain( const Brain& b)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
}

Brain& Brain::operator = (const Brain& b)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Brain destroyed." << std::endl;
}