/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:16:20 by akhalid        #+#    #+#             */
/*   Updated: 2022/03/16 15:17:39 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ){}

Karen::~Karen( void ){}

void Karen::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup"
		" burger. I really do!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
		" enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
		" years whereas you started working here since last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
	void (Karen::*ptr)(void) = NULL;
	!level.compare("DEBUG") ? (ptr = &Karen::debug) : NULL;
	!level.compare("INFO") ? (ptr = &Karen::info) : NULL;
	!level.compare("WARNING") ? (ptr = &Karen::warning) : NULL;
	!level.compare("ERROR") ? (ptr = &Karen::error) : NULL;
	if (ptr)
		(this->*ptr)();
}