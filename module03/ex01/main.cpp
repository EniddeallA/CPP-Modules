/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 02:11:11 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/23 03:46:06 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap ct("creeper");
	ScavTrap st("sopu");
	
	ct.attack("sopu");
	st.attack("creeper");
	ct.beRepaired(10);
	st.beRepaired(10);
	std::cout << ct.getHealth() << std::endl;
	std::cout << st.getHealth() << std::endl;
	ct.takeDamage(15);
	st.takeDamage(15);
	std::cout << ct.getHealth() << std::endl;
	std::cout << st.getHealth() << std::endl;
	st.guardGate();
	return (0);
}