/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:09:20 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/15 10:13:49 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "iostream"

class Weapon
{
	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
		std::string getType( void );
		void setType(std::string type);
		
	private:
		std::string type;
};

#endif