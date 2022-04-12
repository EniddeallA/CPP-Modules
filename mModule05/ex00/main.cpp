/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:13:57 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 02:02:43 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("creeper", 2);
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("creeper", 2);
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
	} 
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("creeper", 1);
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
	} 
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("creeper", 150);
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	} 
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}