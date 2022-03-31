/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:25:41 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:37:18 by akhalid          ###   ########.fr       */
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
	private:
		std::string forms[3];

	public:
		Intern( void );
		Intern( const Intern& i );
		Intern& operator = ( const Intern& i );
		~Intern( void );

		Form* makeForm(std::string name, std::string target);

};

#endif