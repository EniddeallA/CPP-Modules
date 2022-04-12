/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:13:57 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:58:17 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;

		Bureaucrat b("creeper", 1);
		b.signForm(*rrf);
		b.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}