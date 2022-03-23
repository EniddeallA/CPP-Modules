/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:48:06 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 03:53:03 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& ct);
		DiamondTrap& operator = (const DiamondTrap& ct);
		~DiamondTrap( void );

		void guardGate( void );
		void highFivesGuys(void);
		void whoAmI();

	private:
		std::string name;
};

#endif