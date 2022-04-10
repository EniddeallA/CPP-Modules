/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 04:13:18 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/10 01:01:36 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

template <class T>
void iter(T* const arr, int length, void (*function)(T const&))
{
	for (int i = 0; i < length; i++)
		function(arr[i]);
}