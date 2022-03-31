/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 04:00:08 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:01:30 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string target;

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( const PresidentialPardonForm& ppf);
		PresidentialPardonForm& operator = ( const PresidentialPardonForm& ppf);
		~PresidentialPardonForm( void );

		std::string getTarget( void ) const;
		void execute(const Bureaucrat& executor) const;
};

#endif