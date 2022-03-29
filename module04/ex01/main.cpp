/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:12 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/29 07:07:44 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << std::endl << "Testing Brain deep copy:\n" << std::endl;

	Cat c;
	Cat cc(c);

	std::cout << c.getBrain() << std::endl;
	std::cout << cc.getBrain() << std::endl;

	std::cout << std::endl;

	Dog d;
	Dog dd;
	dd = d;

	std::cout << d.getBrain() << std::endl;
	std::cout << dd.getBrain() << std::endl;

	return 0;
}