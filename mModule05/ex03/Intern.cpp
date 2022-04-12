/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:25:42 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/03 23:15:36 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{}

Intern::Intern( const Intern& i )
{
	(void)i;
}

Intern& Intern::operator = ( const Intern& i )
{
	(void)i;
	return (*this);
}

Intern::~Intern( void )
{
	
}

Form* Intern::newShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::newRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::newPresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string name, std::string target)
{
	Form *f = NULL;

	Form* (Intern::*ptr)(std::string) = NULL;
	!name.compare("shrubbery creation") ? (ptr = &Intern::newShrubberyForm) : NULL;
	!name.compare("robotomy request") ? (ptr = &Intern::newRobotomyForm) : NULL;
	!name.compare("presidential pardon") ? (ptr = &Intern::newPresidentialForm) : NULL;
	if (ptr)
	{
		f = (this->*ptr)(target);
		std::cout << "Intern creates " << *f << std::endl;
	}
	return f;
}