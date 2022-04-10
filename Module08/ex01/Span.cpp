/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 05:55:59 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/10 06:43:16 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): n(N)
{}

Span::Span( const Span & src ): n(src.n)
{
	for(size_t i = 0; i < src.size(); i++)
		vec.push_back(src.getElement(i));
}

Span::~Span()
{}

int Span::getElement(unsigned int idx) const
{
	if (size() >= n)
		throw OutOfBoundsException;
	return(vec[idx]);
}

size_t min(size_t a, unsigned int b)
{
	if ( a < b)
		return (a);
	else 
		return (b);
}

size_t Span::size() const
{
	return (min(vec.size(), n));
}

void Span::addNumber(int a)
{
	if (size() < n)
		vec.push_back(a);
	else
		throw OutOfBoundsException;
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (size() >= n)
		throw OutOfBoundsException;
	vec.insert(vec.end(), begin, end);
}

void Span::setN(int _n)
{
	n = _n;
}

int Span::getN(void) const
{
	return n;
}

int Span::shortestSpan(void) 
{
	if (size() <= 1)
		throw NoSpanException;
	tmp.clear();
	for(size_t i = 0; i < size(); i++)
		tmp.push_back(vec[i]);
	std::sort(tmp.begin(), tmp.end());
	int minSpan = 2147483647;
	for ( size_t i = 1; i < tmp.size(); i++)
	{
		int sp = tmp[i] - tmp[i - 1];
		if (sp < minSpan)
			minSpan = sp;
	}
	return minSpan;
}

int Span::longestSpan(void) 
{
	if (size() <= 1)
		throw NoSpanException;
	tmp.clear();
	for(size_t i = 0; i < size(); i++)
		tmp.push_back(vec[i]);
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

Span &				Span::operator=( Span const & src )
{
	vec.clear();
	this->setN(src.getN()); 
	for(size_t i = 0; i < src.size(); i++)
		vec.push_back(src.getElement(i));
	return *this;
}