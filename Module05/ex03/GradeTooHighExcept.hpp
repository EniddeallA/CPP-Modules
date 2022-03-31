/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighExcept.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalid <akhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:10:02 by akhalid           #+#    #+#             */
/*   Updated: 2022/03/31 02:42:11 by akhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPT_HPP
# define GRADETOOHIGHEXCEPT_HPP

#include "iostream"

class GradeTooHighExcept: public std::exception
{
	virtual const char* what() const throw()
	{
		return "Grade too high exception.";
	};
};

#endif