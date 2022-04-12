/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 03:06:20 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/28 20:17:26 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice(const Ice& i);
		Ice& operator = (const Ice& i);
		~Ice( void );

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif