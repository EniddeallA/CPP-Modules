/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:16:22 by akhalid        #+#    #+#             */
/*   Updated: 2022/03/16 15:17:33 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

enum Level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	nolevel
};

Level get_level(std::string level)
{
	Level l = nolevel;

	!level.compare("DEBUG") && (l = DEBUG);
	!level.compare("INFO") && (l = INFO);
	!level.compare("WARNING") && (l = WARNING);
	!level.compare("ERROR") && (l = ERROR);
	return (l);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Wrong arguments." << std::endl;
	else
	{
		Karen k;
		Level level = get_level(argv[1]);
		switch (level)
		{
			case DEBUG:
				k.complain("DEBUG");
				k.complain("INFO");
				k.complain("WARNING");
				k.complain("ERROR");
				break;
			case INFO:
				k.complain("INFO");
				k.complain("WARNING");
				k.complain("ERROR");
				break;
			case WARNING:
				k.complain("WARNING");
				k.complain("ERROR");
				break;
			case ERROR:
				k.complain("ERROR");
				break;
			case nolevel:
				std::cout << "What Karen level is this?" << std::endl;\
				break;
		}
	}
	
	return (0);
}