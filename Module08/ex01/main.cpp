/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 05:55:57 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/11 01:41:00 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10000);
		std::vector<int> vec;
		for (int i = 1; i < 10000; i++)
			vec.push_back(i);		
		sp.addNumbers(vec.begin(), vec.end());
		sp.addNumber(10010);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}