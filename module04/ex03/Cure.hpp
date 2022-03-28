/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 03:06:18 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/28 16:11:41 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure(const Cure& c);
		Cure& operator = (const Cure& c);
		~Cure( void );

		AMateria* clone() const;
		void use(ICharacter& target);
	
};

#endif