/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 02:17:12 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/14 01:52:35 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int j = 1; j < argc; j++)
		{
			for (int i = 0; i < (int)strlen(argv[j]); i++)
			{
				std::cout << (char)toupper(argv[j][i]);
			}
		}
	std::cout << std::endl;
	return (0);
}