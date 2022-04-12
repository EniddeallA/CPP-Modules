/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 22:35:46 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/27 15:55:48 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
# define BRAIN_CPP

#include "iostream"

class Brain
{
	public:
		Brain( void );
		Brain( const Brain& b);
		Brain& operator = (const Brain& b);
		~Brain( void );

		std::string ideas[100];
};

#endif