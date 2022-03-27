/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:26:25 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/26 22:32:14 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& a );
		WrongAnimal& operator = ( const WrongAnimal& a );
		~WrongAnimal( void );
		
		void makeSound( void ) const;
		
		std::string getWrongType( void ) const;

	protected:
		std::string type;
};

#endif