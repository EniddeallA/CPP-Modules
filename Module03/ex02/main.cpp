/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:11 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 18:31:49 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("creeper");
	ScavTrap st("sopu");
	FragTrap ft("laarbi");
	
	ct.attack("sopu");
	st.attack("creeper");
	ft.attack("creeper");
	ct.beRepaired(10);
	st.beRepaired(10);
	ft.beRepaired(10);
	std::cout << ct.gethitpoints() << std::endl;
	std::cout << st.gethitpoints() << std::endl;
	std::cout << ft.gethitpoints() << std::endl;
	ct.takeDamage(15);
	st.takeDamage(15);
	ft.takeDamage(15);
	std::cout << ct.gethitpoints() << std::endl;
	std::cout << st.gethitpoints() << std::endl;
	std::cout << ft.gethitpoints() << std::endl;
	
	st.guardGate();
	ft.highFivesGuys();
	return (0);
}