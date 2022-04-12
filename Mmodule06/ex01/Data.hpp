/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:15:20 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/08 23:59:15 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	public:
		Data( void );
		Data( int a );
		Data( const Data& d);
		Data& operator = (const Data& d);
		~Data( void );

		int a;
};

#endif