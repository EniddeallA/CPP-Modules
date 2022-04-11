/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:49:53 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/11 01:27:33 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CPP
# define MUTANTSTACK_CPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void )
{}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T>& ms) : 
	std::stack<T>(ms.getContainer())
{
	this->elements = ms.getContainer();
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator = ( const MutantStack& ms)
{
	this->elements = ms.getContainer();
	while (!std::stack<T>::empty())
		std::stack<T>::pop();
	for (int i = 0; i < this->elements; i++)
		std::stack<T>::push(this->elements[i]);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack( void )
{}

template <typename T>
std::vector<T> MutantStack<T>::getContainer( void ) const
{
	return elements;
}

template <typename T>
void MutantStack<T>::push( T e )
{
	elements.push_back(e);
	std::stack<T>::push(e);
}

template <typename T>
void MutantStack<T>::pop( void )
{
	std::stack<T>::pop();
	elements.resize(std::stack<T>::size());
}

template <typename T> MutantStack<T>::iterator MutantStack<T>::begin( void )
{
	return (MutantStack<T>::iterator(&elements[0]));
}

template <typename T> MutantStack<T>::iterator MutantStack<T>::end( void )
{
	return (MutantStack<T>::iterator(&elements[elements.size()]));
}

#endif
