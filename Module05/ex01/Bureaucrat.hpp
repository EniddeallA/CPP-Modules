/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:13:58 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 02:35:09 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "iostream"
#include "GradeTooHighExcept.hpp"
#include "GradeTooLowExcept.hpp"
#include "Form.hpp"

class GradeTooHighExcept;
class GradeTooLowExcept;
class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		Bureaucrat( void );
		GradeTooHighExcept GradeTooHighException;
		GradeTooLowExcept GradeTooLowException; 
	
	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& b);
		Bureaucrat& operator = ( const Bureaucrat& b);
		~Bureaucrat( void );

		std::string getName( void ) const;
		int getGrade( void ) const;

		void incrementGrade( void );
		void decrementGrade( void );

		void signForm( Form& f);
};

std::ostream& operator << (std::ostream& os, const Bureaucrat& b);

#endif