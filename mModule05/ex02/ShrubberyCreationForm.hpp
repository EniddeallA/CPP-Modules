/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:39:39 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 03:49:24 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( const ShrubberyCreationForm& scf);
		ShrubberyCreationForm& operator = ( const ShrubberyCreationForm& scf);
		~ShrubberyCreationForm( void );

		std::string getTarget( void ) const;
		void execute(const Bureaucrat& executor) const;
};

#endif