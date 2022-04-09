/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:05:04 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/09 00:19:22 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Base
{
	public:
		Base(void ){};
		virtual ~Base( void ){};

};

class A : public Base
{
	public:
		A( void ){};
		~A( void ){};
};

class B : public Base
{
	public:
		B( void ){};
		~B( void ){};
};

class C : public Base
{
	public:
		C( void ){};
		~C( void ){};
};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);