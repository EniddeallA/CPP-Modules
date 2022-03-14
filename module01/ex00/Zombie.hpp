/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 04:17:18 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 07:46:35 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie( void );
		std::string getName( void );
		void announce( void );
	
	private:
		std::string name;
		Zombie( void );
};