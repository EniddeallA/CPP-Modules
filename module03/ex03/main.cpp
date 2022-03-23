/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:11 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 17:11:31 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct("creeper");
	ScavTrap st("sopu");
	FragTrap ft("laarbi");
	DiamondTrap dt("spoody");
	
	ct.attack("sopu");
	st.attack("creeper");
	ft.attack("creeper");
	dt.attack("creeper");
	
	ct.beRepaired(10);
	st.beRepaired(10);
	ft.beRepaired(10);
	dt.beRepaired(10);

	std::cout << ct.getHealth() << std::endl;
	std::cout << st.getHealth() << std::endl;
	std::cout << ft.getHealth() << std::endl;
	std::cout << dt.getHealth() << std::endl;

	ct.takeDamage(15);
	st.takeDamage(15);
	ft.takeDamage(15);
	dt.takeDamage(15);

	std::cout << ct.getHealth() << std::endl;
	std::cout << st.getHealth() << std::endl;
	std::cout << ft.getHealth() << std::endl;
	std::cout << dt.getHealth() << std::endl;
	
	st.guardGate();
	ft.highFivesGuys();
	dt.guardGate();
	dt.highFivesGuys();
	dt.whoAmI();
	return (0);
}