/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:08 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 18:38:30 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& ct);
		ClapTrap& operator = (const ClapTrap& ct);
		~ClapTrap( void );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName( void ) const;
		int gethitpoints(void) const;
        int getEnergy(void) const;
        int getDamage(void) const;

		void setName( std::string name );
		void setAttrs( int hitpoints, int energy, int damage);

	protected:	
		std::string name;
		int hitpoints;
		int energy;
		int damage;
};

#endif