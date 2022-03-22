/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 23:23:49 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/22 01:22:49 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed tri_area(Point const a, Point const b, Point const c)
{ 
   Fixed f = ((b.getFixedX() - a.getFixedX()) * (c.getFixedY() - a.getFixedY())) - 
      ((c.getFixedX() - a.getFixedX()) * (b.getFixedY() - a.getFixedY()));
   return (Fixed::abs(f / 2));
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
   Fixed tr_area, a1, a2, a3; tr_area = tri_area(a, b, c);
   a1 = tri_area(point, b, c);
   a2 = tri_area(a, point, c);
   a3 = tri_area(a, b, point);
   return (tr_area == a1 + a2 + a3 && a1 != Fixed(0) && a2 != Fixed(0) && a3 != Fixed(0));
}
