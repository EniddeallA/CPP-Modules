/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:55:00 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:45:12 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", 72, 137),
	target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& rrf):
	Form(rrf),
	target(rrf.target)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator = ( const RobotomyRequestForm& rrf)
{
	this->target = rrf.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	
}

std::string RobotomyRequestForm::getTarget( void ) const
{
	return this->target;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (canExecute(executor))
	{
		if(rand()%100>50)
			std::cout 	<< "*Drilling noises* " << this->target
						<< " has been robotomized successfully" << std::endl;
		else
			std::cout 	<< "*Drilling noises* " << this->target
						<< "'s robotomy failed" << std::endl;
	}
}

std::ostream& operator << (std::ostream& os, const RobotomyRequestForm& f)
{
	os 	<< f.getName()		<< " that requires a bureaucrat with a grade of "
		<< f.getS_grade()	<< " to be signed and a bureaucrat with a grade of "
		<< f.getE_grade()	<< " to be executed";
	return (os);
}