/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 04:29:01 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/09 05:12:56 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include "exception"

class IndexOutOfBounds : public std::exception
{
	const char* what() const throw()
	{
		return "Index Out Of Bounds";
	};
};

template <class T>
class Array
{
	private:
		T *arr;
		int s;

	public:
		Array( void )
		{
			this->arr = new T[0];
			s = 0;
		}
		
		Array( unsigned int n)
		{
			this->arr = new T[n];
			T *tmp = new T();
			for (unsigned int i = 0; i < n; i++)
				arr[i] = tmp[i];
			delete tmp;
			s = n;
		}
		
		Array( const Array& a)
		{
			arr = new T[a.size()];
            s = a.size();
            for (int i = 0; i < s; i++)
                arr[i] = a[i];
		}
		
		Array& operator = ( const Array& a)
		{
			if (this->arr)
				delete this->arr;
			this->arr = new T[a.size()];
			s = a.size();
			for (int i = 0; i < s; i++)
                arr[i] = a[i];
			return (*this);
		}

		T& operator [] ( int i ) const
		{
			if (i >= s)
				throw IndexOutOfBounds();
			return this->arr[i];
		}

		int size(void) const
		{
			return s;
		}
		
		~Array()
		{
			delete arr;
		}
};

#endif