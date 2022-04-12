/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 03:55:02 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 03:57:00 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string target;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( const RobotomyRequestForm& rrf);
		RobotomyRequestForm& operator = ( const RobotomyRequestForm& rrf);
		~RobotomyRequestForm( void );

		std::string getTarget( void ) const;
		void execute(const Bureaucrat& executor) const;
};

#endif