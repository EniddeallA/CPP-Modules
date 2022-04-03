/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:12 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/03 22:52:34 by akhalid          ###   ########.fr       */
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

	std::cout << std::endl << "Deep copy brain test:\n" << std::endl;

	Cat c;
	Dog d;
	{
		Cat cc(c);
		Dog dd(d);
	}

	std::cout << c.getBrain()->ideas[0] << std::endl;
	std::cout << d.getBrain()->ideas[0] << std::endl;

	return 0;
}