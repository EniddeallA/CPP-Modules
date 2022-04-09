/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:56:48 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/09 04:09:36 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <class T> 
T min( T a, T b)
{
	return ((a < b) ? a : b);
}

template <class T> 
T max( T a, T b)
{
	return ((a > b) ? a : b);
}

template <class T> 
void swap( T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
}