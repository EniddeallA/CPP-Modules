/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:25:42 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:46:45 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	this->forms[0] = "shrubbery creation";
	this->forms[1] = "robotomy request";
	this->forms[2] = "presidential pardon";
}

Intern::Intern( const Intern& i )
{
	(void)i;
	this->forms[0] = "shrubbery creation";
	this->forms[1] = "robotomy request";
	this->forms[2] = "presidential pardon";
}

Intern& Intern::operator = ( const Intern& i )
{
	(void)i;
	return (*this);
}

Intern::~Intern( void )
{
	
}

Form* Intern::makeForm(std::string name, std::string target)
{
	Form *f = NULL;
	int i;

	for (i = 0; i < 3; i++)
		if (forms[i] == name)
			break;
	switch (i)
	{
		case 0:
			f = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << *f << std::endl;
			break;
		case 1:
			f = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << *f << std::endl;
			break;
		case 2:
			f = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << *f << std::endl;
			break;
		default:
			std::cout << "Unkown form." << std::endl;
			break;
	}
	return f;
}