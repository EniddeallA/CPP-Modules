/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:00:41 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:07:48 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", 25, 5),
	target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& ppf):
	Form(ppf),
	target(ppf.target)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator = ( const PresidentialPardonForm& ppf)
{
	this->target = ppf.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	
}

std::string PresidentialPardonForm::getTarget( void ) const
{
	return this->target;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (canExecute(executor))
		std::cout	<< this->target << " has been pardoned by Zaphod Beeblebrox."
					<< std::endl;
}