/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:03:17 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/15 15:18:46 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "fstream"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		ifstream file(argv[1]);
		ofstream file(argv[1]);
		if (!file.is_open())
		{
			std::cout << "File doesn't exist" << std::endl;
			return (0);
		}
		
	}
	else
		std::cout << "Wrong arguments" << std::endl;
	return (0);
}