/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:11 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/26 21:54:43 by akhalid          ###   ########.fr       */
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
	std::cout << ct1.gethitpoints() << std::endl;
	std::cout << ct2.gethitpoints() << std::endl;
	ct1.takeDamage(15);
	ct2.takeDamage(15);
	std::cout << ct1.gethitpoints() << std::endl;
	std::cout << ct2.gethitpoints() << std::endl;
	return (0);
}