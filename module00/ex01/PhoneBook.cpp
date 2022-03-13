/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:55 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/13 04:52:41 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "\033[1;32mPhonebook successfully created\033[0m" << std::endl;
	this->size = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\033[1;31mPhonebook successfully destroyed\033[0m" << std::endl;
	return ;
}

void PhoneBook::ADD(void)
{
	Contact newcontact;
	std::string input;

	std::cout << "Adding new contact" << std::endl;
	std::cout << "First name: " << std::endl;
	std::cin >> input;
	newcontact.setfirstname(input);
	std::cout << "Last name: " << std::endl;
	std::cin >> input;
	newcontact.setlastname(input);
	std::cout << "Nickname: " << std::endl;
	std::cin >> input;
	newcontact.setnickname(input);
	std::cout << "Number: " << std::endl;
	std::cin >> input;
	newcontact.setnumber(input);
	std::cout << "Deepest secret: " << std::endl;
	std::cin >> input;
	newcontact.setsecret(input);
	this->contacts[this->size % 8] = newcontact;
	this->size++;
}

void PhoneBook::SEARCH(void)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << this->contacts[i].getfirstname() << std::endl;
	}
}

// void EXIT(void);
