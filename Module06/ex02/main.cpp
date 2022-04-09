/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:10:04 by akhalid           #+#    #+#             */
/*   Updated: 2022/04/09 00:32:31 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Base.hpp"

Base * generate(void)
{
	srand(time(NULL));
    int r = rand()%100;

    if ( r < 30)
	{
		std::cout << "Created A" << std::endl;
        return (new A());
	}
    else if (r < 60)
    {
		std::cout << "Created B" << std::endl;
        return (new B());
	}
    else 
    {
		std::cout << "Created C" << std::endl;
        return (new C());
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
    {
        A &tmp = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)tmp;
    }
    catch(std::exception &e)
    {
        try
        {
            B &tmp = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
            (void)tmp;
        }
        catch(std::exception &e)
        {
            try
            {
                C &tmp = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
                (void)tmp;
            }
            catch(std::exception &e)
            {

            }
        }
    }
}

int main()
{
	Base *r =  generate();
	Base &ref = *r;

    identify(*r);
	identify(ref);

	return (0);
}