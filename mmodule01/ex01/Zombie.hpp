/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 04:17:18 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 11:11:16 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

#endif