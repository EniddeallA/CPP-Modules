/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:55 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/12 10:18:29 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "\033[1;32mPhonebook successfully created\033[0m" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\033[1;31mPhonebook successfully destroyed\033[0m" << std::endl;
	return ;
}

void PhoneBook::ADD(void)
{
	Contact newcontact;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	int number;
	std::string secret;

	std::cout << "Adding new contact" << std::endl;
	std::cout << "First name: " << std::endl;
	std::cin >> firstname;
	newcontact.setfirstname(firstname);
	std::cout << "Last name: " << std::endl;
	std::cin >> lastname;
	newcontact.setlastname(lastname);
	std::cout << "Nickname: " << std::endl;
	std::cin >> nickname;
	newcontact.setnickname(nickname);
	std::cout << "Number: " << std::endl;
	std::cin >> number;
	newcontact.setnumber(number);
	std::cout << "Deepest secret: " << std::endl;
	std::cin >> secret;
	newcontact.setsecret(secret);
	contacts[size % 8] = newcontact;
	size++;
}

void PhoneBook::SEARCH(void)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << this->contacts[i].getfirstname() << std::endl;
	}
}

// void EXIT(void);
