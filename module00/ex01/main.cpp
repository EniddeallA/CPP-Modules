/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 09:14:52 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/12 10:17:43 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook pb;

	
	for (int i = 0; i < 10; i++)
	{
		pb.ADD();
	}
	

	pb.SEARCH();
	return (0);
}