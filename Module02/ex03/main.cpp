/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:47:55 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 14:59:03 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) 
{
	Point a(-10, 0);
	Point b(20, 0);
	Point c(10, 30);
	// Point p(-10, 0);
	Point p(10, 15);
	if (bsp(a, b, c, p))
		std::cout << "Point in triangle" << std::endl;
	else
		std::cout << "Point not in triangle" << std::endl;
	return 0;
}