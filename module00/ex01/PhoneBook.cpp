/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:55 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 02:50:46 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "\033[1;32mPhonebook successfully created\033[0m" << std::endl;
	size = 0;
	index = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\033[1;31mPhonebook successfully destroyed\033[0m" << std::endl;
}

void PhoneBook::ADD(void)
{
	std::string input;

	std::cout << "Adding new contact" << std::endl;
	std::cout << "First name: " << std::endl;
	getline(std::cin, input);
	this->contacts[this->index].setfirstname(input);
	std::cout << "Last name: " << std::endl;
	getline(std::cin, input);
	this->contacts[this->index].setlastname(input);
	std::cout << "Nickname: " << std::endl;
	getline(std::cin, input);
	this->contacts[this->index].setnickname(input);
	std::cout << "Number: " << std::endl;
	getline(std::cin, input);
	this->contacts[this->index].setnumber(input);
	std::cout << "Deepest secret: " << std::endl;
	getline(std::cin, input);
	this->contacts[this->index].setsecret(input);
	if (this->size < 8)
		this->size++;
	this->index = (this->index + 1) % 8;
	std::cout << "\033[1;32mContact has been added successfully.\033[0m" << std::endl;
}

void PhoneBook::printfield(std::string value)
{
	if (value.length() <= 10)
		std::cout << std::setw(10) << value;
	else
		std::cout << value.substr(0, 9) << ".";
}

void PhoneBook::display_contacts(void)
{
	int i = 0;

	std::cout << "CONTACTS:" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < this->size)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		printfield(this->contacts[i].getfirstname());
		std::cout << "|";
		printfield(this->contacts[i].getlastname());
		std::cout << "|";
		printfield(this->contacts[i].getnickname());
		std::cout << "|" << std::endl;
		i++;
	}
	if (!this->size)
		std::cout << "\033[1;31mPhonebook is empty.\033[0m" << std::endl;
}

void PhoneBook::display_contact(int i)
{
	std::cout << "|";
	printfield(this->contacts[i].getfirstname());
	std::cout << "|";
	printfield(this->contacts[i].getlastname());
	std::cout << "|";
	printfield(this->contacts[i].getnickname());
	std::cout << "|";
	printfield(this->contacts[i].getnumber());
	std::cout << "|";
	printfield(this->contacts[i].getsecret());
	std::cout << "|" << std::endl;
}

int PhoneBook::check_index(std::string input)
{
	int i;

	i = 0;
	while (input[i] == ' ') i++;
	while (input[i] >= '0' && input[i] <= '9') i++;
	while (input[i] == ' ') i++;
	if (i != (int)input.size())
		return (0);
	return (1);
}

void PhoneBook::SEARCH(void)
{
	std::string input;
	int i;

	display_contacts();
	if (!this->size)
		return ;
	std::cout << "Enter index of Contact to display:" << std::endl;
	getline(std::cin, input);
	std::stringstream s;
	s << input;
	s >> i;
	if (!check_index(input) || i < 0 || i >= this->size)
	{
		std::cout << "Not a valid index." << std::endl;
		return;
	}
	std::cout << "Displaying contact number " << i << ":" << std::endl;
	display_contact(i);
}

void PhoneBook::execute(void)
{
	std::string input;

	while (1)
	{
		std::cout << "Please enter one of the following commands: ADD, SEARCH, EXIT";
		std::cout << std::endl;
		getline(std::cin, input);
		if (input == "ADD")
			this->ADD();
		else if (input == "SEARCH")
			this->SEARCH();	
		else if (input == "EXIT")
			break;
		else
			std::cout << "Please enter a valid command." << std::endl;
	}
}
