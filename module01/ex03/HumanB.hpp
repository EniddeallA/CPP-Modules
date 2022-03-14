/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:09:17 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 12:03:11 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		~HumanB( void );
		void setWeapon( Weapon &weapon );
		void attack( void );

	private:
		std::string name;
		Weapon *weapon;
		HumanB( void );
};

#endif