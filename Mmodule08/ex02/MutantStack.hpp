/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:45:15 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/11 01:25:54 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include "iostream"
# include <stack>
# include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		std::vector<T> elements;	

	public:
		MutantStack( void );
		MutantStack( const MutantStack<T>& ms);
		MutantStack<T>& operator = ( const MutantStack& ms);
		~MutantStack( void );

		std::vector<T> getContainer( void ) const;
		void push( T e );
		void pop( void );

		class iterator
		{
			private:
				T *ptr;
			
			public:
				iterator() : ptr(0) {};
				iterator( T *ptr ) : ptr(ptr){};
				iterator& operator = (const iterator& i) { ptr = i.getPtr(); };
				~iterator( void ) {};
				
				T* getPtr( void ) const { return ptr; } ;
				void setPtr( T* p ) { ptr = p; };
				
				T&		operator*(){ return (*ptr); }

				iterator  operator ++ ()   //preIncr
				{
					iterator tmp = *this;
					ptr++;
					return tmp;
				}
				iterator   operator -- ()    //preDecr
				{
					iterator tmp = *this;
					ptr--;
					return tmp;
				}
				iterator   operator ++ (int) //postIncr
				{
					ptr++;
					return *this;
				}
				iterator   operator -- (int) //postDecr
				{
					ptr--;
					return *this;
				}

				bool   operator == (iterator it)
				{
					return (it.getPtr() == this->getPtr());
				}
				bool   operator != (iterator it)
				{
					return (it.getPtr() != this->getPtr());
				}
		};

		MutantStack<T>::iterator begin( void );
		MutantStack<T>::iterator end( void );
};

#include "MutantStack.cpp"
#endif