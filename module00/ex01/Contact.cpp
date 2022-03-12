/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:57 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/12 10:18:30 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "\033[1;32mContact successfully created\033[0m" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "\033[1;31mContact successfully destroyed\033[0m" << std::endl;
	return ;
}

void Contact::setfirstname(std::string firstname)
{
	this->first_name = firstname;
}
void Contact::setlastname(std::string last_name)
{
	this->last_name = last_name;
}
void Contact::setnickname(std::string nickname)
{
	this->nickname = nickname;
}
void Contact::setnumber(int number)
{
	this->number = number;
}
void Contact::setsecret(std::string secret)
{
	this->secret = secret;
}

std::string Contact::getfirstname(void)
{
	return this->first_name;
}
std::string Contact::getlastname(void)
{
	return this->last_name;
}
std::string Contact::getnickname(void)
{
	return this->nickname;
}
int Contact::getnumber(void)
{
	return this->number;
}
std::string Contact::getsecret(void)
{
	return this->secret;
}