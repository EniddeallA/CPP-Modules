/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:15:21 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/08 23:59:33 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void )
{}

Data::Data( int a ):
	a(a)
{}

Data::Data( const Data& d)
{
	(void)d;
}

Data& Data::operator = (const Data& d)
{
	(void)d;
	return (*this);
}

Data::~Data( void )
{}