/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:04:21 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 02:43:27 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string name, const int _s_grade, const int _e_grade):
	name(name),
	is_signed(false),
	s_grade(_s_grade),
	e_grade(_e_grade)
{
	if (_s_grade < 1 || _e_grade < 1)
		throw (GradeTooHighException);
	if (_s_grade > 150 || _e_grade > 150)
		throw (GradeTooLowException);
	std::cout << "Form constructed." << std::endl;
}

Form::Form( const Form& f):
	is_signed(f.is_signed),
	s_grade(f.s_grade),
	e_grade(f.e_grade)
{
	std::cout << "Form copy constructed." << std::endl;
}

Form& Form::operator = ( const Form& f)
{
	is_signed = f.getIs_signed();
	std::cout << "Form assigned." << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destroyed." << std::endl;
}

std::string Form::getName( void ) const
{
	return this->name;
}

bool Form::getIs_signed( void ) const
{
	return this->is_signed;
}

int Form::getS_grade( void ) const
{
	return this->s_grade;
}

int Form::getE_grade( void ) const
{
	return this->e_grade;
}

void Form::beSigned( const Bureaucrat b)
{
	if (b.getGrade() <= this->s_grade)
		this->is_signed = true;
	else
		throw (GradeTooLowException);
}

std::ostream& operator << (std::ostream& os, const Form& f)
{
	os 	<< f.getName() << " that requires a bureaucrat with a grade of "
		<< f.getS_grade() << " to be signed and a bureaucrat with a grade of "
		<< f.getE_grade() << " to be executed";
	return (os);
}
