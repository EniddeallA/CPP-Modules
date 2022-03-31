/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowExcept.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:09:04 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 02:42:13 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPT_HPP
# define GRADETOOLOWEXCEPT_HPP

#include "iostream"

class GradeTooLowExcept: public std::exception
{
	virtual const char* what() const throw()
	{
		return "Grade too low exception.";
	};
};

#endif