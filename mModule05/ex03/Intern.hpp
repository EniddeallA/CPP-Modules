/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:25:41 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/03 23:14:22 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern( void );
		Intern( const Intern& i );
		Intern& operator = ( const Intern& i );
		~Intern( void );

		Form* makeForm(std::string name, std::string target);
		Form* newShrubberyForm(std::string target);
		Form* newRobotomyForm(std::string target);
		Form* newPresidentialForm(std::string target);
};

#endif