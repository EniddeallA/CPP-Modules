/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:11 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 02:42:11 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct1("creeper");
	ClapTrap ct2("sopu");
	
	ct1.attack("sopu");
	ct2.attack("creeper");
	ct1.beRepaired(10);
	ct2.beRepaired(10);
	ct1.takeDamage(15);
	ct2.takeDamage(15);
	return (0);
}