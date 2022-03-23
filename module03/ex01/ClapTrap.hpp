/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:08 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 02:54:42 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"

class ClapTrap
{
	public:
		ClapTrap( std::string name );
		ClapTrap( std::string name , int health, int energy, int damage);
		ClapTrap( const ClapTrap& ct);
		ClapTrap& operator = (const ClapTrap& ct);
		~ClapTrap( void );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName( void ) const;

	protected:	
		std::string name;
		int health;
		int energy;
		int damage;
		ClapTrap( void );
};

#endif