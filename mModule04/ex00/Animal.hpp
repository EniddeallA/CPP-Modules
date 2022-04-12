/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:38 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/26 22:28:44 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"

class Animal
{
	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal& a );
		Animal& operator = ( const Animal& a );
		virtual ~Animal( void );
		
		virtual void makeSound( void ) const;
		
		std::string getType( void ) const;

	protected:
		std::string type;
};

#endif