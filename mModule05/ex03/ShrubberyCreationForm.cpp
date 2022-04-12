/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:39:44 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:45:08 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", 145, 137),
	target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& scf):
	Form(scf),
	target(scf.target)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator = ( const ShrubberyCreationForm& scf)
{
	this->target = scf.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	
}

std::string ShrubberyCreationForm::getTarget( void ) const
{
	return this->target;
}

std::string getAsciiTree()
{
	return "\
				oxoxoo    ooxoo\n\
				ooxoxo oo  oxoxooo\n\
				oooo xxoxoo ooo ooox\n\
				oxo o oxoxo  xoxxoxo\n\
				oxo xooxoooo o ooo\n\
					ooo\\oo\\  /o/o\n\
						\\  \\/ /\n\
						|   /\n\
						|  |\n\
						|  |\n\
						|  |\n\
						|  |\n\
				______/____\\____" ;
	}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (canExecute(executor))
	{
		std::ofstream file(this->getTarget() + "_shrubbery");
		if (!file.is_open())
		{
			std::cout << "File couldnt' be opened." << std::endl;
			return;
		}
		file << getAsciiTree() << std::endl;
		file.close();
	}
}

std::ostream& operator << (std::ostream& os, const ShrubberyCreationForm& f)
{
	os 	<< f.getName()		<< " that requires a bureaucrat with a grade of "
		<< f.getS_grade()	<< " to be signed and a bureaucrat with a grade of "
		<< f.getE_grade()	<< " to be executed";
	return (os);
}