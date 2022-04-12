/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:13:57 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 02:45:29 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b("creeper", 2);
		Form f("Form 1", 2, 1);
		b.signForm(f);
		if (f.getIs_signed())
			std::cout << "Form signed." << std::endl;
		else
			std::cout << "Form not signed." << std::endl;
	} 
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("creeper", 2);
		Form f("Form 1", 1, 1);
		b.signForm(f);
		if (f.getIs_signed())
			std::cout << "Form signed." << std::endl;
		else
			std::cout << "Form not signed." << std::endl;
	} 
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	
	return (0);
}