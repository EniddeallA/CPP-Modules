/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:13:56 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 02:43:03 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{}

Bureaucrat::Bureaucrat( std::string name, int grade ):
	name(name)
{
	if (grade  < 1)
		throw(GradeTooHighException);
	if (grade  > 150)
		throw(GradeTooLowException);
	this->grade = grade;
	std::cout << "Bureaucrat constructed." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& b):
	name(b.name),
	grade(b.grade)
{
	std::cout << "Bureaucrat copy constructed." << std::endl;
}

Bureaucrat& Bureaucrat::operator = ( const Bureaucrat& b)
{
	this->grade = b.getGrade();
	std::cout << "Bureaucrat assigned." << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destroyed." << std::endl;
}

std::string Bureaucrat::getName( void ) const
{
	return this->name;
}

int Bureaucrat::getGrade( void ) const
{
	return this->grade;
}

void Bureaucrat::incrementGrade( void )
{
	if (grade == 1)
		throw(GradeTooHighException);
	grade--;
}

void Bureaucrat::decrementGrade( void )
{
	if (grade == 150)
		throw(GradeTooLowException);
	grade++;
}

void Bureaucrat::signForm( Form& f)
{
	Bureaucrat b(this->getName(), this->getGrade());
	try
	{
		f.beSigned(b);
		std::cout << b << " signed " << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << b << " couldn't sign " << f << " because " << e.what() << std::endl;
	}
}

std::ostream& operator << (std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}