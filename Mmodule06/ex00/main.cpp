/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 02:11:02 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/09 03:51:31 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void putChar(char c, bool impossible)
{
	std::cout << "char: ";
	if (impossible)
		std::cout << "impossible";
	else
	{
		if (isprint(c))
			std::cout << "'" << c << "'";
		else
			std::cout << "Non displayable";
	}
	std::cout << std::endl;
}

void putInt(int c, bool impossible)
{
	std::cout << "int: ";
	if (impossible)
		std::cout << "impossible" ;
	else
		std::cout << c;
	std::cout << std::endl;
}

float roundd(float var)
{
    float value = (int)(var * 1000 + .5);
    return (float)value / 100;
}

void putFloat(float n, bool impossible, std::string val)
{
	std::cout << "float: ";
	if (val == "nan" || val == "nanf")
		std::cout << "nanf";
	else if (val == "+inf" || val == "-inf" || val == "+inff" || val == "-inff")
		std::cout << val[0] << "inff";
	else
	{
		if (impossible  || val == "inf" || val == "inff")
			std::cout << "impossible";
		else
		{
			std::cout << n ;
			if(roundd(n - (int)n) < 0.001)
                std::cout << ".0";
			std::cout << "f";
		}
	}
	std::cout << std::endl;
}

void putDouble(double n, bool impossible, std::string val)
{
	std::cout << "double: ";
	if (val == "nan" || val == "nanf")
		std::cout << "nan";
	else if (val == "+inf" || val == "-inf" || val == "+inff" || val == "-inff")
		std::cout << val[0] << "inf";
	else
	{
		if (impossible  || val == "inf" || val == "inff")
			std::cout << "impossible";
		else
		{
			std::cout << n;
			if(roundd(n - (int)n) < 0.001)
                std::cout << ".0";
		}
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	std::string value(argv[1]);
	int intRes;
	float floatRes;
	double doubleRes;
	char charRes;
	
	try
	{
		intRes = std::stoi(value);
		charRes = static_cast<char>(intRes);
		putChar(charRes, 0);
	}
	catch(const std::exception& e)
	{
		putChar(charRes, 1);
	}

	try
	{
		intRes = std::stoi(value);
		putInt(intRes, 0);
	}
	catch(const std::exception& e)
	{
		putInt(intRes, 1);
	}
	
	try
	{
		floatRes = std::stof(value);
		putFloat(floatRes, 0, value);
	}
	catch(const std::exception& e)
	{
		putFloat(floatRes, 1, value);
	}

	try
	{
		doubleRes = std::stod(value);
		putDouble(doubleRes, 0, value);
	}
	catch(const std::exception& e)
	{
		putDouble(doubleRes, 1, value);
	}

	return (0);
}