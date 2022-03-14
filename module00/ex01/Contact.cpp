/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:57 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 00:45:35 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::Contact(
				std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string number,
				std::string secret
				):
				first_name(first_name),
				last_name(last_name),
				nickname(nickname),
				number(number),
				secret(secret)
{}

Contact::~Contact(void)
{}

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
void Contact::setnumber(std::string number)
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
std::string Contact::getnumber(void)
{
	return this->number;
}
std::string Contact::getsecret(void)
{
	return this->secret;
}