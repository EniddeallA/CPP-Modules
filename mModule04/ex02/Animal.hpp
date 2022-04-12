/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:38 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/27 16:23:35 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"

class Animal
{
	public:
		virtual ~Animal( void );
		
		virtual void makeSound( void ) const = 0;
		
		virtual std::string getType( void ) const = 0;

	protected:
		std::string type;
		Animal( void );
		Animal( std::string type );
		Animal( const Animal& a );
		Animal& operator = ( const Animal& a );

};

#endif