/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 04:17:15 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 08:16:24 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int N = 10;

	Zombie *z = zombieHorde(N, "creeper");
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete[] z;
	return (0);
}