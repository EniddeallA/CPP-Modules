/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:12 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/27 16:26:24 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();

	delete i;
	delete j;

	std::cout << std::endl << "Deep copy brain test:\n" << std::endl;

	Cat c;
	Cat cc(c);

	std::cout << c.getBrain() << std::endl;
	std::cout << cc.getBrain() << std::endl;

	return 0;
}