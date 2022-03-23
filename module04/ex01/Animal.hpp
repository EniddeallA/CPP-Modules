/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:38 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 22:19:53 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"

class Animal
{
	public:
		Animal( void );
		Animal( const Animal& a );
		Animal& operator = ( const Animal& a );
		virtual ~Animal( void );
		
		virtual void makeSound( void ) const;
		
		virtual std::string getType( void ) const;
		void setType( std::string type );

	protected:
		std::string type;
};

#endif