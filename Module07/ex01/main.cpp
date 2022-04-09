/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 04:13:16 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/09 04:27:51 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void print(T& e)
{
    std::cout << e << std::endl;
}

template<typename T>
void increment(T& e)
{
    e += 1;
}

int main( void )
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	::iter(arr, 10, increment);
	::iter(arr, 10, print);
	
	std::string str_arr[3] = {"hello", "world" , "!"};
	::iter(str_arr, 3, print);
}