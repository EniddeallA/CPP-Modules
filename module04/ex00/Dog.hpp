/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:52:58 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 22:19:56 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog& a );
		Dog& operator = ( const Dog& a );
		~Dog( void );
		
		void makeSound( void ) const;
		
		std::string getType( void ) const;
		void setType( std::string type );

	protected:
		std::string type;
};

#endif