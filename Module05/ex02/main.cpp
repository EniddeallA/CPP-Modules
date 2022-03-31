/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:13:57 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 04:19:18 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("creeper", 137);
		ShrubberyCreationForm scf("home");
		b.executeForm(scf);
	} 
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("creeper", 72);
		RobotomyRequestForm rrf("home");
		b.executeForm(rrf);
	} 
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("creeper", 5);
		PresidentialPardonForm ppf("home");
		b.executeForm(ppf);
	} 
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}