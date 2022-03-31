/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:04:22 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:07:11 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "iostream"
#include "GradeTooHighExcept.hpp"
#include "GradeTooLowExcept.hpp"
#include "Bureaucrat.hpp"

class GradeTooHighExcept;
class GradeTooLowExcept;
class Bureaucrat;

class Form
{
	protected:
		const std::string name;
		bool is_signed;
		const int s_grade;
		const int e_grade;
		GradeTooHighExcept GradeTooHighException;
		GradeTooLowExcept GradeTooLowException;
		Form( void );

	public:
		Form( const std::string name, const int _s_grade, const int _e_grade);
		Form( const Form& f);
		Form& operator = ( const Form& f);
		~Form();

		std::string getName( void ) const; 
		bool getIs_signed( void ) const;
		int getS_grade( void ) const;
		int getE_grade( void ) const;

		void beSigned( const Bureaucrat b);
		bool canExecute( const Bureaucrat executor ) const;
		virtual void execute( const Bureaucrat& executor ) const = 0;
};

std::ostream& operator << (std::ostream& os, const Form& f);

#endif