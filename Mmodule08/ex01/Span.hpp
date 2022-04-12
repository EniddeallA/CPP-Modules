/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 05:56:00 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/10 06:43:17 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>
# include <algorithm>

class OutOfBoundsExcept: public std::exception
{
	const char* what() const throw()
	{
		return "Index Out of Bounds";
	};
};

class NoSpanExcept: public std::exception
{
	const char* what() const throw()
	{
		return "There are no numbers stored, or only one, no span can be found.";
	};
};


class Span
{
	private:
		unsigned int n;
		std::vector<int> vec;
		std::vector<int> tmp;
 		OutOfBoundsExcept OutOfBoundsException;
		NoSpanExcept NoSpanException;
	public:

		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		int getElement(unsigned int idx) const ;
		size_t size() const ;
		void addNumber(int a);

		void setN(int n);
		int	 getN()const ;
		
		int shortestSpan(void);
		int longestSpan(void);


		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif