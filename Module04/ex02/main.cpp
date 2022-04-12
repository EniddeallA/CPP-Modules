/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:25:12 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 01:05:52 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//Animal test; Compile error. Can't initiate abstract class

	Animal* a[10];

	for (int i = 0; i < 5; i++)
		a[i] = new Dog();
	for (int i = 5; i < 10; i++)
		a[i] = new Cat();

	for (int i = 0; i < 10; i++)
		delete a[i];

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