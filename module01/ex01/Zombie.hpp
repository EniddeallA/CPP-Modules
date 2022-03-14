/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 04:17:18 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 08:12:26 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Zombie
{
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		std::string getName( void );
		void setName( std::string name );
		void announce( void );
	
	private:
		std::string name;
};