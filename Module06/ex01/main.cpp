/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 02:11:02 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/09 00:30:55 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "iostream"


uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *ptr = new Data(10);

	uintptr_t serialized = serialize(ptr);
	Data *deserialized = deserialize(serialized);
	
	std::cout << deserialized << std::endl;
	std::cout << ptr << std::endl;

	std::cout << deserialized->a << std::endl;
	std::cout << ptr->a << std::endl;
	return (0);
}