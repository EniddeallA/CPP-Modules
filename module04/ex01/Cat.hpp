/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:52:50 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 22:19:55 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat& a );
		Cat& operator = ( const Cat& a );
		~Cat( void );
		
		void makeSound( void ) const;
		
		std::string getType( void ) const;
		void setType( std::string type );

	protected:
		std::string type;
};

#endif