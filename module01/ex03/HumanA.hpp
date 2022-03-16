/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:09:22 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/15 10:07:42 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void attack( void );

	private:
		std::string name;
		Weapon &weapon;
		HumanA( void );
};

#endif