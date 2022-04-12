/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 05:20:15 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/09 05:54:09 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exception"
#include "iostream"
#include <algorithm>

template <class T>
typename T::iterator easyfind(T container, int o)
{
	typename T::iterator it = std::find(container.begin(), container.end(), o);
	if (it == container.end())
		throw std::exception();
	else 
		return it;
}
